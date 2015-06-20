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

int light[3][3];

void change(int n,int i,int j)
{
    if(n%2) {
        if(i-1>=0) {
            light[i-1][j]=!light[i-1][j];
        }
        if(i+1<3) {
            light[i+1][j]=!light[i+1][j];
        }
        if(j-1>=0) {
            light[i][j-1]=!light[i][j-1];
        }
        if(j+1<3) {
            light[i][j+1]=!light[i][j+1];
        }
        light[i][j]=!light[i][j];
    }
}

int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            s(a[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j])change(a[i][j],i,j);
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            p(!light[i][j]);
        printf("\n");
    }
    return 0;
}
