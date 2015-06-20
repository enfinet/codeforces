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

map<int,int> mp;

int main()
{
    int n;
    s(n);
    int count=0;
    int num;
    int flag=0;
    for(int i=0;i<n;i++) {
        s(num);
        mp[num]++;
        if(num && mp[num]==2)count++;
        if(num && mp[num]>2)flag=1;
    }
    if(flag) {
        p(-1);
    } else p(count);
    return 0;
}
