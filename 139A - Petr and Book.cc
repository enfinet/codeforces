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

int main()
{
    int n;
    s(n);
    int a[7];
    int sum=0;
    for(int i=0;i<7;i++) {
        s(a[i]);
        sum+=a[i];
    }
    if(!(n%sum))n=sum;
    else n%=sum;
    int i=0;
    while(n>0) {
        n-=a[i];
        i++;
    }
    p(i);
    return 0;
}
