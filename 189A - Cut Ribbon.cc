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

int arr[5000];

int main()
{
    int n,a,b,c;
    s(n);s(a);s(b);s(c);
    int f=0;
    for(int i=1;i<=n;i++) {
        f=0;
        if(i-a>=0 && arr[i]<arr[i-a]+1) {
            arr[i]=arr[i-a]+1;
            f=1;
        }
        if(i-b>=0 && arr[i]<arr[i-b]+1) {
            arr[i]=arr[i-b]+1;
            f=1;
        }
        if(i-c>=0 && arr[i]<arr[i-c]+1) {
            arr[i]=arr[i-c]+1;
            f=1;
        }
        if(!f){
            arr[i]=-1;
        }
    }
    p(arr[n]);
    return 0;
}
