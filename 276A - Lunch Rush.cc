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
    int n,k;
    s(n);
    s(k);
    int x,y;
    int max;
    s(x);s(y);
    if(y>k)max=x-(y-k);
    else max=x;
    int temp;
    for(int i=1;i<n;i++) {
        s(x);s(y);
        if(y>k)temp=x-(y-k);
        else temp=x;
        if(temp>max)max=temp;
    }
    p(max);
    return 0;
}
