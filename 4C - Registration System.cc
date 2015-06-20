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
    int n;
    scanf("%d",&n);
    map< string , int > mp;
    string s;
    for(int i=0;i<n;i++) {
        cin>>s;
        if(mp[s]){
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        } else {
            printf("OK\n");
            mp[s]++;
        }
    }
    return 0;
}
