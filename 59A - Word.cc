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
    char a[101],b[101],c[101];
    scanf("%s",a);
    int count1=0,count2=0,i;
    for(i=0;a[i];i++) {
        if(islower(a[i])) {
            c[i]=a[i];
            count1++;
            b[i]=toupper(a[i]);
        } else {
            b[i]=a[i];
            count2++;
            c[i]=tolower(a[i]);
        }
    }
    b[i]='\0';
    c[i]='\0';
    if(count1>=count2)printf("%s\n",c);
    else printf("%s\n",b);
    return 0;
}
