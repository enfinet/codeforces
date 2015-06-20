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
    int a[n];
    int count=0,sum=0;
    for(int i=0;i<n;i++) {
        s(a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
        if(!((sum-a[i])%2))count++;
    p(count);
    return 0;
}
