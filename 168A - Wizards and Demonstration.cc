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
    int n,x,y;
    s(n);s(x);s(y);
    int ans;
    if((n*y)%100)
        ans=(((n*y)/100)-x)+1;
    else ans=(((n*y)/100)-x);
    if(ans<0)ans=0;
    p(ans);
    return 0;
}
