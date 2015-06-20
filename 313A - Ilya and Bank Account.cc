#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <sstream>
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

#define s(a)    scanf("%d",&a)
#define sc(a)   scanf("%c",&a
#define sl(a)   scanf("%lld",&a)
#define sd(a)   scanf("%lf",&a)
#define ss(a)   scanf("%s",a)
#define p(a)    printf("%d\n",a)
#define pc(a)   printf("%c\n",a)
#define pl(a)   printf("%lld\n",a)
#define pd(a)   printf("%lf\n",a)
#define ps(a)   printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int fun(int n)
{
    if(n>=0)
        return n;
    else {
        n*=-1;
        int a=n/10;
        int rem=n%10;
        int b=n/100;
        b*=10;
        b+=rem;
        a*=-1;
        b*=-1;
        if(a>b)return a;
        else return b;
    }
}

int main()
{
    int n;
    s(n);
    int ans=fun(n);
    p(ans);
    return 0;
}
