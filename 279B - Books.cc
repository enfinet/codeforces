#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<climits>
using namespace std;

#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    int n,t;
    s(n);s(t);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
        s(a[i]);
    int count=0,mx=0;
    int x=0;
    sum=0;
    int i=0,j=0;
    while(j<n) {
        if(sum+a[j]>t) {
            mx=max(mx,count);
            sum-=a[i];
            i++;
            count--;
        } else {
            sum+=a[j];
            count++;
            j++;
        }
    }
    if(sum+a[j]>t) {
            mx=max(mx,count);
            sum-=a[i];
            i++;
            count--;
    } else mx=max(mx,count);
    p(mx);
    return 0;
}
