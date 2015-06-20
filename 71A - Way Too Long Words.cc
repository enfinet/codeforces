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

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        char s[110];
        scanf("%s",s);
        int l=strlen(s);
        if(l>10) {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        } else printf("%s\n",s);
    }
    return 0;
}
