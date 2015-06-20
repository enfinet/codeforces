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
    int a[100];
    a[0]=5;
    int sum=5,i=1;
    while(sum<1000000001) {
        a[i]=a[i-1]*2;
        sum+=a[i];
        i++;
    }
    a[i]=a[i-1]*2;
    map<int,string > mp;
    mp[0]="Sheldon";
    mp[1]="Leonard";
    mp[2]="Penny";
    mp[3]="Rajesh";
    mp[4]="Howard";
    int t;
    scanf("%d",&t);
    i=0;
    while(t>a[i]) {
        t-=a[i];
        i++;
    }
    int ans=a[i]/5;
    if(t<=ans)
        cout<<mp[0]<<endl;
    if(t>ans && t<=2*ans)
        cout<<mp[1]<<endl;
    if(t>2*ans && t<=3*ans)
        cout<<mp[2]<<endl;
    if(t>3*ans && t<=4*ans)
        cout<<mp[3]<<endl;
    if(t>4*ans && t<=5*ans)
        cout<<mp[4]<<endl;
    return 0;
}

