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

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int check_3(int a[3])
{
    if(a[0]==3 && a[1]==3 && a[2]==3)return 1;
    return 0;
}

int check_2(int a[3])
{
    if(a[0]==1 && a[1]==3 && a[2]==3)return 1;
    else if(a[0]==2 && a[1]==2 && a[2]==2)return 1;
    else if(a[0]==2 && a[1]==2 && a[2]==3)return 1;
    else if(a[0]==2 && a[1]==3 && a[2]==3)return 1;
    return 0;
}

int main()
{
    int r,g,b;
    s(r);s(g);s(b);
    int count=0;
    if(r && !(r%3)) {
        count+=r/3-1;
        r=3;
    } else {
        count+=r/3;
        r%=3;
    }
    if(g && !(g%3)) {
        count+=g/3-1;
        g=3;
    } else {
        count+=g/3;
        g%=3;
    }
    if(b && !(b%3)) {
        count+=b/3-1;
        b=3;
    } else {
        count+=b/3;
        b%=3;
    }
    int a[3];
    a[0]=r;
    a[1]=g;
    a[2]=b;
    sort(a,a+3);
    if(check_2(a))count+=2;
    else if(check_3(a))count+=3;
    else if(a[0]==0||a[1]==0||a[2]==0) count+=a[0]/3+a[1]/3+a[2]/3;
    else count++;
    p(count);
    nl();
    return 0;
}
