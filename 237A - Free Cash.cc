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

int a[24][60];

int main()
{
    int n;
    s(n);
    int max=0;
    int x,y;
    while(n--) {
        s(x);s(y);
        a[x][y]++;
        if(max<a[x][y])max=a[x][y];
    }
    p(max);
    return 0;
}
