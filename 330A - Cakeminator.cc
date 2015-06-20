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

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%I64d",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%I64d",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

int main()
{
    int n,m;
    s(n);s(m);
    char a[n][m+1];
    for(int i=0;i<n;i++)
        ss(a[i]);
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++) {
        int flag=0;
        for(int j=0;j<m;j++) {
            if(a[i][j]=='S') {
                flag=1;
                break;
            }
        }
        if(!flag)count1+=m;
    }
    for(int i=0;i<m;i++) {
        int flag=0;
        for(int j=0;j<n;j++) {
            if(a[j][i]=='S') {
                flag=1;
                break;
            }
        }
        if(!flag)count2+=n;
    }
    count3=count1+(count2-((count1/m)*(count2/n)));
    p(count3);
    nl();
    return 0;
}
