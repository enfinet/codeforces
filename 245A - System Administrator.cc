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
    int xA=0,yA=0,xB=0,yB=0;
    int t,x,y;
    while(n--) {
        s(t);s(x);s(y);
        if(t==1) {
            xA+=x;yA+=y;
        } else {
            xB+=x;yB+=y;
        }
    }
    if(xA>=yA)printf("LIVE\n");
    else printf("DEAD\n");
    if(xB>=yB)printf("LIVE\n");
    else printf("DEAD\n");
    return 0;
}
