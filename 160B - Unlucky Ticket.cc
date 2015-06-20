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

int check(char a[],char b[],int n)
{
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++)
        if(a[i]>=b[i]) {
            flag1=1;
            break;
        }
    for(int i=0;i<n;i++)
        if(a[i]<=b[i]) {
            flag2=1;
            break;
        }
    if(!flag1||!flag2)return 1;
    else return 0;
}

int main()
{
    int n;
    s(n);
    char s[n*2],a[n];
    scanf("%s",s);
    int i;
    for(i=0;i<n;i++)
        a[i]=s[i+n];
    a[i]='\0';
    sort(a,a+n);
    sort(s,s+n);
    int ans=check(a,s,n);
    if(ans)printf("YES\n");
    else printf("NO\n");
    return 0;
}
