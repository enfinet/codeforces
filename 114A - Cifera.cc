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
    int a,b;
    s(a);
    s(b);
    int count=0;
    while(!(b%a)) {
        b/=a;
        count++;
    }
    if(b>1)printf("NO\n");
    else {
        printf("YES\n");
        p(count-1);
    }
    return 0;
}
