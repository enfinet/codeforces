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
    int n;
    s(n);
    char s[200001];
    scanf("%s",s);
    int countA=0,countI=0;
    for(int i=0;s[i];i++) {
        if(s[i]=='A')countA++;
        else if(s[i]=='I')countI++;
    }
    int ans=0;
    if(countI==1)p(countI);
    else if(!countI) p(countA);
    else p(ans);
    return 0;
}
