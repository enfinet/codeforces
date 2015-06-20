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

int dist(int n)
{
    int a[10]={0};
    int a1=n%10;
    n/=10;
    int a2=n%10;
    n/=10;
    int a3=n%10;
    n/=10;
    int a4=n;
    a[a1]++;

    if(!a[a2])a[a2]++;
    else return 0;

    if(!a[a3])a[a3]++;
    else return 0;

    if(!a[a4])a[a4]++;
    else return 0;

    return 1;
}

int main()
{
    int a[10000]={0};
    int j=0;
    int i=1000;
    while(i<=9015) {
        if(dist(i)) {
            a[i]=1;
        }
        i++;
    }
    int n;
    scanf("%d",&n);
    if(a[n])n++;
    while(n<=9015) {
        if(a[n]) {
            printf("%d\n",n);
            return 0;
        }
        n++;
    }
    return 0;
}
