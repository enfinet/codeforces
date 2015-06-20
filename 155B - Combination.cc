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
    int n;
    s(n);
    vector< pair<int, int> > v;
    int a,b;
    for(int i=0;i<n;i++) {
        s(a);s(b);
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end(),greater<pair<int,int> >() );
    int count=1,sum=0;
    for(int i=0;i<n&&count>0;i++) {
        count--;
        count+=v[i].first;
        sum+=v[i].second;
    }
    p(sum);
    return 0;
}

/*
20
20 0
36 0
27 0
25 0
0 0
24 0
90 0
94 0
100 0
72 0
50 0
6 0
16 0
85 0
22 4
60 0
48 0
13 0
13 0
7 0
ans: 391
*/
