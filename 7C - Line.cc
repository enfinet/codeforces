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

#define LL long long

LL rr,ss;

LL extendedEucleidean(LL a,LL b,LL x,LL y,LL lastx,LL lasty)
{
    if(b==0LL)
    {
        rr=x;
        ss=y;
        return a;
    }
    else
        return extendedEucleidean(b,a%b,lastx,lasty,x-lastx*(a/b),y-lasty*(a/b));
}

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    LL gcd=extendedEucleidean(a,b,1LL,0LL,0LL,1LL);
    if(c%gcd)
        cout<<"-1\n";
    else
    {
        LL k=(-c)/gcd;
        cout<<rr*k<<" "<<ss*k<<"\n";
    }
    return 0;
}
