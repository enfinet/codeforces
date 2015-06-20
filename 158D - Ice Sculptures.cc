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
#define p(a) printf("%d\n",a)

int a[20001];

int fact(int n,int t)
{
    int ans=0,mx=INT_MIN;
    for(int j=1; j<=n; j++) {
        ans=0;
        for(int i=j; i<=t; i+=n)
            ans+=a[i];
        mx=max(mx,ans);
    }
    return mx;
}

int main()
{
    int n;
    s(n);
    int t=n;
    for(int i=1; i<=n; i++)
        s(a[i]);
    int mx=INT_MIN;
    for(int i=1; i<=t/3; i++)
        if(n%i==0)
            mx=max(mx,fact(i,t));
    p(mx);
    return 0;
}
