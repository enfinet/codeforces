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
    int sum=0;
    int i=0,num;
    while(i<n) {
        s(num);
        sum+=num;
        i++;
    }
    i=1;
    int count=0;
    while(i<=5) {
        if(((i+sum)%(n+1))!=1)count++;
        i++;
    }
    p(count);
    return 0;
}
