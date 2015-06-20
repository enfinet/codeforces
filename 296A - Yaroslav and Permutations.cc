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
#define mod 1000000007

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[1001]={0};
    int flag=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[a[i]]++;
        if(b[a[i]] > (n+1)/2)flag=1;
    }
    if(n>1) {
    if(flag)printf("NO\n");
    else printf("YES\n");
    }else printf("YES\n");
    return 0;
}
