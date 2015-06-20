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

int main()
{
    int n;
    s(n);
    vector< pair<int ,int> > v;
    vector< pair<int ,int> > a;
    int x,y;
    for(int i=0;i<n;i++) {
        s(x);s(y);
        v.push_back(make_pair(x,y));
        a.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    x=v[0].first,y=v[0].second;
    int count=0;
    int ind;
    int flag=0;
    for(int i=1;i<n;) {
        if(x<=v[i].first && y>=v[i].second)i++;
        else if(x>=v[i].first && y<=v[i].second)x=v[i].first,y=v[i].second,i++;
        else {flag=1;break;}
    }
    if(!flag) {
        for(int i=0;i<n;i++)
            if(x==a[i].first && y==a[i].second)ind=i+1;
        p(ind);
    } else p(-1);
    return 0;
}
