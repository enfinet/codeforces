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

bool cmp(const pair<long long ,int> &a, const pair<long long ,int> &b)
{
    return a.second<=b.second;
}

long long fun(long long s)
{
    long long num=0ll;
    while(s) {
        if(s%10ll)
            num=num*10ll+(s%10ll);
        s/=10ll;
    }
    s=0ll;
    while(num) {
        s=s*10ll+num%10ll;
        num/=10ll;
    }
    return s;
}

int main()
{
    long long a,b;
    cin>>a>>b;
    long long sum1=a+b;
    sum1=fun(sum1);
    a=fun(a);
    b=fun(b);
    long long t=a+b;
    if(sum1==t) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
