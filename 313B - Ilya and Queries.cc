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

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lld",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)
#define p(a)        printf("%d\n",a)
#define pc(a)       printf("%c\n",a)
#define pl(a)       printf("%lld\n",a)
#define pd(a)       printf("%lf\n",a)
#define ps(a)       printf("%s\n",a)
//#define for(i,n)    for(;i<=n;i++)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    char s[10000004];
    ss(s);
    int arr[10000004];
    arr[0]=0;
    for(int i=1;s[i];i++) {
        if(s[i]==s[i-1])arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1];
    }
    int n;
    s(n);
    int a,b;
    while(n--) {
        s(a),s(b);
        p(arr[b-1]-arr[a-1]);
    }
    return 0;
}
