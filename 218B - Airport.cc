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
    int a[m],b[m];
    for(int i=0;i<m;i++) {
            s(a[i]);
            b[i]=a[i];
    }
    sort(a,a+m);
    sort(b,b+m,greater<int>());
    int min=0,max=0;
    int t=n;
    while(t--) {
        max+=b[0];
        b[0]--;
        sort(b,b+m,greater<int>());
    }
    for(int i=0;i<m;i++) {
        while(a[i] && n) {
                n--;
                min+=a[i];
                a[i]--;
            }
        }
    cout<<max<<" "<<min<<endl;
    return 0;
}
