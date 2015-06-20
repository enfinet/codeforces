#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<cctype>
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
    string s;
    cin>>s;
    int i=0;
    int l=s.size();
    int count=0;
    for(int i=1;i<l;i++)
        if(isupper(s[i]))count++;
    if(count==l-1) {
        if(!i && islower(s[i]))s[i]=toupper(s[i]);
        else if(!i && isupper(s[i]))s[i]=tolower(s[i]);
        i=1;
        while(s[i]) {
            if(isupper(s[i]))s[i]=tolower(s[i]);
            else if(islower(s[i]))s[i]=toupper(s[i]);
            i++;
        }
        cout<<s<<endl;;
    }else cout<<s<<endl;
    return 0;
}
