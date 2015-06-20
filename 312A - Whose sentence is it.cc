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
#define sl(a)       scanf("%lld",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%lld",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int check_first(string s)
{
    string a="miao.";
    for(int i=0;i<5;i++)
        if(a[i]!=s[i])return 0;
    return 1;
}

int check_last(string s)
{
    string a=".alal";
    for(int i=s.length()-1,j=0;j<=4;i--,j++)
        if(a[j]!=s[i])return 0;
    return 1;
}

int main()
{
    int n;
    cin>>n;
    string s;
    while(n--) {
        while(1) {
            getline(cin,s);
            if(s.length()>0) {
                break;
            }
        }
        if(s.length()>=5) {
            if(check_first(s) && check_last(s)) {
                ps("OMG>.< I don't know!");nl();
            } else if(check_first(s)) {
                ps("Rainbow's\n");
            } else if(check_last(s)) {
                ps("Freda's\n");
            } else {
                ps("OMG>.< I don't know!");nl();
            }
        } else {
            ps("OMG>.< I don't know!");nl();
        }
    }
    return 0;
}


/*

Test Case:

5
I will go to play with you lala.
wow, welcome.
miao.lala.
miao.
miao .

10

,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._ ,.._

miao.miao.miao.
lala.lala.lala.
lala.miao.
miaolala.
miao.lala
miaolala_
,.._ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ


*/
