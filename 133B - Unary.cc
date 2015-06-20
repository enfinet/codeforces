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
#define MOD 1000003

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    map<char,string> mp;
    mp['>']="1000";
    mp['<']="1001";
    mp['+']="1010";
    mp['-']="1011";
    mp['.']="1100";
    mp[',']="1101";
    mp['[']="1110";
    mp[']']="1111";
    string a="";
    string s;
    cin>>s;
    int l=s.size();
    l*=4;
    for(int i=0;s[i];i++)
        a+=mp[s[i]];
    int ans=0;
    int b[500];
    b[1]=1;
    for(int i=2;i<500;i++)
        b[i]=(b[i-1]*2)%MOD;
    for(int i=l-1;i>=0;i--) {
        if(a[i]=='1')
            ans=(ans+b[l-i])%MOD;
    }
    cout<<ans%MOD<<endl;
    return 0;
}
