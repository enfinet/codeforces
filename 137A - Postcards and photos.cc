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

int main()
{
    char s[101];
    scanf("%s",s);
    int count1=1,max=0;
    for(int i=1;s[i];i++) {
        if(s[i]==s[i-1])count1++;
        else {
            if(count1%5) {count1/=5;count1++;}
            else count1/=5;
            max+=count1;
            count1=1;
        }
    }
    if(count1%5) {count1/=5;count1++;}
    else count1/=5;
    max+=count1;
    p(max);
    return 0;
}
