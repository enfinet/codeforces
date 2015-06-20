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
    int n,m;
    s(n);s(m);
    int i=1,temp=(i*(i-1))/2;
    while(m>=i) {
        m-=i;
        i++;
        if(i>n)i=1;
    }
    p(m);
    return 0;
}
