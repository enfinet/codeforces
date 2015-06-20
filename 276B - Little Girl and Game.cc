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
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int main()
{
    string s;
    cin>>s;
    int i=0;
    int a[130]={0};
    while(s[i]) {
        a[s[i]]++;
        i++;
    }
    i=96;
    int count1=0,count2=0,count3=0;
    while(i<130) {
        if(a[i]%2) {
            if(a[i]>1)
                count2++;
            else count3++;
        }
        i++;
    }
    if(count3)count3--;
    else if(count2)count2--;
    count2+=count3;
    if(count2) {
        if(count2%2)
            cout<<"Second\n";
        else cout<<"First\n";
    } else cout<<"First\n";
    return 0;
}
