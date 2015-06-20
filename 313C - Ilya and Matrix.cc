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

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%I64",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)
#define p(a)        printf("%d\n",a)
#define pc(a)       printf("%c\n",a)
#define pl(a)       printf("%I64\n",a)
#define pd(a)       printf("%lf\n",a)
#define ps(a)       printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    int arr[]={0,1,4,16,64,256,1024,4096,16384,65536,262144,1048576,4194304};
    int n;
    cin>>n;
    int pwr=log2(n);
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    pwr/=2;
    pwr++;
    sort(a,a+n,greater<int>());
    long long sum=0ll;
    int i=0,j=1,k=0;
    while(pwr) {
        int it=arr[j]-arr[i];
        while(it) {
            sum+=(long long)pwr*a[k];
            k++;
            it--;
        }
        i++,j++,pwr--;
    }
    cout<<sum<<endl;
    return 0;
}
