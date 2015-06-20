#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define null 0
#define MOD 1000000007
typedef long long ll;

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%lldd",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d\n",a)
#define pb(a)       printf("%d ",a)
#define pc(a)       printf("%c\n",a)
#define pcb(a)      printf("%c ",a)
#define pl(a)       printf("%lld\n",a)
#define plb(a)      printf("%lld ",a)
#define pd(a)       printf("%lf\n",a)
#define pdb(a)      printf("%lf ",a)
#define ps(a)       printf("%s\n",a)
#define psb(a)      printf("%s ",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int n;
    s(n);
    int nn=0,nz=0,np=0;
    int a[n];
    int b[n];
    int x[n],y[n];
    int num;
    for(int i=0; i<n; i++) {
        s(num);
        if(num<0) {
            x[nn]=num;
            nn++;
        } else if(num) {
            y[np]=num;
            np++;
        } else {
            nz++;
        }
    }
    int ansn=1,ansz=nz,ansp=np;
    int j=0;
    b[j++]=x[--nn];
    while(nz--)
        b[j++]=0;
    if(nn%2) {
        ansz++;
    }
    while(nn) {
        b[j++]=x[--nn];
    }
    while(np) {
        b[j++]=y[--np];
    }
    cout<<ansn<<" "<<b[0]<<endl;
    int cnt=ansp;
    ansp=n-1-ansz;
    cout<<ansp<<" ";
    int i=ansz+1;
    while(i<n) {
        pb(b[i]);
        i++;
    }
    cout<<"\n";
    cout<<ansz<<" ";
    cnt=ansz;
    i=1;
    while(cnt--) {
        pb(b[i]);
        i++;
    }
    cout<<"\n";
    return 0;
}
