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
#define p(a) printf("%I64d\n",a)

map<int,int> mp;

int main()
{
    int n;
    s(n);
    int num;
    int a[11]={0};
    for(int i=0;i<n;i++) {
        s(num);
        if(num>=0)a[num]++;
        else mp[num]++;
    }
    long long ans=0ll;
    long long c2=(long long)a[0];
    c2--;
    long long c4=(c2*(c2+1ll))/2ll;
    ans=c4;
    for(int i=1;i<11;i++)
        ans+=(long long)((long long)a[i]*(long long)mp[-1*i]);
    p(ans);
    return 0;
}
