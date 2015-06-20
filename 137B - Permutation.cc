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

int a[5100];

int main()
{
    int n;
    s(n);
    int count=0,num;
    int x=n;
    while(n--) {
        s(num);
        if(a[num]||num>x)count++;
        else a[num]++;
    }
    p(count);
    return 0;
}
