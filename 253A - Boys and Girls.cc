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
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    s(a);s(b);
    if(a==b) {
        for(int i=0;i<(a+b);i++)
            if(i%2)printf("B");
            else printf("G");
    } else if(a>b) {
        for(int i=0;i<(2*b);i++)
            if(i%2)printf("G");
            else printf("B");
        for(int i=0;i<(a-b);i++)
            printf("B");
    } else {
        for(int i=0;i<(2*a);i++)
            if(i%2)printf("B");
            else printf("G");
        for(int i=0;i<(b-a);i++)
            printf("G");
    }
    printf("\n");
    return 0;
}

