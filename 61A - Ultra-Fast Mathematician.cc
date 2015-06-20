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
    string a,b;
    cin>>a>>b;
    int l=a.size();
    for(int i=0;i<l;i++) {
        if(a[i]==b[i])printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}
