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
#define p(a) printf("%d",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

int main()
{
    /*int t;
    s(t);
    while(t--) {*/
    int n,k;
    s(n);s(k);
    char str[n];
    ss(str);
    int i=1,ans=0;
    int flag=0;
    while(i<n) {
        for(int j=0;j<k&&i<n;j++) {
            if(str[i]=='.') {
                ans=i;
                flag=1;
            }
            i++;
            if(flag)break;
        }
        if(ans!=i-1)break;
        //cout<<ans<<endl;
        flag=0;
        //i++;
    }
    if(ans==n-1)printf("YES\n");
    else printf("NO\n");
    //}
    return 0;
}
