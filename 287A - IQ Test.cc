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
    string s[4];
    for(int i=0;i<4;i++)
        cin>>s[i];
    int max=0,temp;
    for(int i=1;i<4;i++) {
        for(int j=1;j<4;j++) {
            temp=0;
            if(s[i-1][j]=='#')temp++;
            if(s[i-1][j-1]=='#')temp++;
            if(s[i][j-1]=='#')temp++;
            if(s[i][j]=='#')temp++;
            if(temp>max)max=temp;

            temp=0;
            if(s[i-1][j]=='.')temp++;
            if(s[i-1][j-1]=='.')temp++;
            if(s[i][j-1]=='.')temp++;
            if(s[i][j]=='.')temp++;
            if(temp>max)max=temp;
        }
    }
    if(max>=3)printf("YES\n");
    else printf("NO\n");
    return 0;
}
