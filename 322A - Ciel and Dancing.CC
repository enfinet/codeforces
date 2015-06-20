#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define null 0
#define MOD 1000000007

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%I64d",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%I64d",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    //int t;
    //s(t);
    //while(t--) {
    int n,m;
    s(n);s(m);
    p(m+n-1);nl();
    if(n<=m) {
        int i=1;
        for(int j=1;j<=m;j++) {
            p(i);sp();p(j);nl();
        }
        for(i=2;i<=n;i++) {
            p(i);sp();p(i);nl();
        }
    } else {
        int i=1;
        for(int j=1;j<=n;j++) {
            p(j);sp();p(i);nl();
        }
        for(i=2;i<=m;i++) {
            p(i);sp();p(i);nl();
        }
    }
    //}
    return 0;
}
