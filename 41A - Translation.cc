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
    char a[101],b[101];
    scanf("%s%s",a,b);
    char *c=strrev(a);
    if(strcmp(a,b)==0)printf("YES\n");
    else printf("NO\n");
    return 0;
}
