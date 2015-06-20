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
#define p(a) printf("%d ",a)

int a[32][32];
int b[1000];

int main()
{
    int n,k,num;
    s(n);s(k);
    for(int i=0;i<k;i++) {
        s(num);
        a[i][0]=num;
        b[num]=1;
    }
    int j=0,l=1;
    for(int i=1;i<=n*k;i++) {
        if(!b[i]) {
            if(l<n) {
                a[j][l]=i;
                l++;
            } else {
                l=1;
                j++;
                a[j][l]=i;
                l++;
            }
        }
    }
    for(int i=0;i<k;i++) {
        for(int j=0;j<n;j++)
            p(a[i][j]);
        printf("\n");
    }
    return 0;
}
