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

#define p(a)        printf("%d\n",a)
#define pb(a)       printf("%d ",a)
#define pc(a)       printf("%c\n",a)
#define pcb(a)      printf("%c ",a)
#define pl(a)       printf("%I64\n",a)
#define plb(a)      printf("%I64 ",a)
#define pd(a)       printf("%lf\n",a)
#define pdb(a)      printf("%lf ",a)
#define ps(a)       printf("%s\n",a)
#define psb(a)      printf("%s ",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int check(int num)
{
    int a[11];
    int j=10;
    while(num) {
        a[j]=num%10;
        num/=10;
        j--;
    }
    for(int i=j+1;i<11;) {
            //cout<<a[i]<<" ";
        if(a[i]==1 && a[i+1]==4 && a[i+2]==4) {
            i+=3;
        } else if(a[i]==1 && a[i+1]==4) {
            i+=2;
        } else if(a[i]==1) {
            i++;
        } else return 0;
    }
    return 1;
}

int main()
{
    int num;
    s(num);
    int ans=check(num);
    if(ans) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
