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
#define p(a) printf("%d ",a)

int main()
{
    int n,k;
    s(n);s(k);
    int i;
    for(i=1;i<=n-k-1;i++)
        p(i);
    while(n>=i) {
        p(n);
        n--;
    }
    printf("\n");
    return 0;
}
