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
    int t;
    s(t);
    int a[t+1];
    for(int i=1;i<t;i++)
        s(a[i]);
    int x,y;
    s(x);
    s(y);
    int count=0;
    for(int i=x;i<y;i++) {
        count+=a[i];
    }
    p(count);
    return 0;
}
