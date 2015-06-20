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
    char s[110];
    gets(s);
    int i=0;
    while(s[i]) {
        if(s[i]=='H' || s[i]=='Q'||s[i]=='9') {
            printf("YES\n");
            return 0;
        }
        i++;
    }
    printf("NO\n");
    return 0;
}
