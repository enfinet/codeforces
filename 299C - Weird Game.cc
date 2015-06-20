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
#define p(a) printf("%d",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    int n;
    s(n);
    n*=2;
    char a[n],b[n];
    ss(a);
    ss(b);
    int c1=0,c2=0,match=0;
    for(int i=0;i<n;i++) {
        if(a[i]=='1' && a[i]==b[i])match++;
        else {
            if(a[i]=='1')c1++;
            if(b[i]=='1')c2++;
        }
    }
    if(match%2) {
        c1+=1;
    }
    if(c1==c2||c1+1==c2)printf("Draw\n");
    else if(c1>c2)printf("First\n");
    else printf("Second\n");
    return 0;
}
