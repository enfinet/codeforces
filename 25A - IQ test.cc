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
    int l1,l2,c1=0,c2=0;
    int num;
    for(int i=1;i<=n;i++) {
        s(num);
        if(num%2) {
            c1++;
            l1=i;
        } else {
            c2++;
            l2=i;
        }
    }
    if(c1==1)p(l1);
    else p(l2);
    return 0;
}
