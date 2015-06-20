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
#define p(a) printf("%d",a)

int main()
{
    int x,y,p,q;
    s(x);s(y);s(p);s(q);
    int count=0;
    vector<pair<int ,int > > a;
    for(int i=p;i<=x;i++) {
        for(int j=q;j<=y;j++) {
            if(i>j) {
                a.push_back(make_pair(i,j));
                count++;
            }
        }
    }
    p(count);
    printf("\n");
    int l=a.size();
    for(int i=0;i<l;i++) {
        p(a[i].first);
        printf(" ");
        p(a[i].second);
        printf("\n");
    }
    return 0;
}
