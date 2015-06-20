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

long long c[100001];
long long d[100001];

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long b[m][3];
    for(int i=0;i<m;i++)
        for(int j=0;j<3;j++)
            cin>>b[i][j];
    long long x,y;
    for(int i=0;i<k;i++) {
        cin>>x>>y;
        c[x-1]++;
        if(y<m)c[y]--;
    }
    b[0][2]*=c[0];
    d[b[0][0]-1]+=b[0][2];
    if(b[0][1]<n)d[b[0][1]]-=b[0][2];
    for(int i=1;i<m;i++) {
        c[i]+=c[i-1];
        b[i][2]*=c[i];
        d[b[i][0]-1]+=b[i][2];
        if(b[i][1]<n)d[b[i][1]]-=b[i][2];
    }
    cout<<a[0]+d[0];
    for(int i=1;i<n;i++) {
        d[i]+=d[i-1];
        cout<<" "<<a[i]+d[i];
    }
    cout<<endl;
    return 0;
}
