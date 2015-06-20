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

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int n,m;
    s(n);s(m);
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int a[11][11]={0};
    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(s[i][j]=='P') {
                if(i>0 && s[i-1][j]=='W' && !a[i-1][j]) {
                    a[i-1][j]=1;
                    count++;
                } else if(i<n-1 && s[i+1][j]=='W' && !a[i+1][j]) {
                    a[i+1][j]=1;
                    count++;
                } else if(j>0 && s[i][j-1]=='W' && !a[i][j-1]) {
                    a[i][j-1]=1;
                    count++;
                } else if(j<m-1 && s[i][j+1]=='W' && !a[i][j+1]) {
                    a[i][j+1]=1;
                    count++;
                }
            }
    p(count);
    return 0;
}
