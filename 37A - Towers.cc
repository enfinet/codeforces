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
#define p(a) printf("%d",a)

int main()
{
    int a[1001]={0};
    int n,num;
    int count=0,max=0;
    s(n);
    for(int i=0;i<n;i++) {
        s(num);
        if(!a[num])count++;
        a[num]++;
        if(max<a[num])max=a[num];
    }
    p(max);
    printf(" ");
    p(count);
    printf("\n");
    return 0;
}
