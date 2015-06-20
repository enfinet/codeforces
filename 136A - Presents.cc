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

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    int num;
    for(int i=1;i<=n;i++) {
        scanf("%d",&num);
        a[num]=i;
    }
    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
