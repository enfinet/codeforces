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

int main()
{
    int n;
    s(n);
    int a[n];
    for(int i=0;i<n;i++)
        s(a[i]);
    sort(a,a+n);
    long long count=0ll;
    for(int i=0;i<n;i++)
        count+=(long long)abs((long long)i+1ll-(long long)a[i]);
    p(count);
    return 0;
}
