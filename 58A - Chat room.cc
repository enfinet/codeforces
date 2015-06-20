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

#define MAX 110

int ls[MAX][MAX];

int lcs(char a[],char b[],int n,int m)
{
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++) {
            if(i==0||j==0)
                ls[i][j]=0;
            else if(a[i-1]==b[j-1])
                ls[i][j]=1+ls[i-1][j-1];
            else ls[i][j]=max(ls[i][j-1],ls[i-1][j]);
        }
    return ls[n][m];
}

int main()
{
    char a[110],b[6]="hello";
    cin>>a;
    int l=strlen(a);
    int m=5;
    int ans=lcs(b,a,m,l);
    if(ans==5)printf("YES\n");
    else printf("NO\n");
    return 0;
}
