#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
using namespace std;

int a[100];

int one(string s)
{
    int l=s.length()-1;
    int num=a[s[l]];
    int p=26;
    l--;
    while(l>=0) {
        num+=a[s[l]]*p;
        p*=26;
        l--;
    }
    return num;
}

string two(int num)
{
    string s="";
    while(num) {
        int t=(num%26);
        if(!t) {
            t=26;
        }
        s+=(char)(t+64);
        if(num%26 ==0) {
        num/=26;
        num--;
        }else num/=26;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int j=1;
    for(int i=65;i<98;i++)
        a[i]=j++;
    string s1;
    int t;
    cin>>t;
    while(t--) {
        cin>>s1;
        int f=0;
        int i=0;
        while(s1[i]>=65)i++;
        f=1;
        while(s1[i] && s1[i]<65)i++;
        if(s1[i])f=0;
        if(f) {
            string s2="";
            string s3="";
            int i=0;
            while(s1[i]>=65) {
                s2+=s1[i];
                i++;
            }
            while(s1[i]) {
                s3+=s1[i];
                i++;
            }
            cout<<"R"<<s3<<"C"<<one(s2)<<endl;
        } else {
            string s2="";
            int i=1;
            while(s1[i]!='C') {
                s2+=s1[i];
                i++;
            }
            i++;
            char h[30];
            int j=s1.length()-1;
            int x=0;
            while(s1[i]) {
                h[x]=s1[i];
                x++;
                i++;
            }
            h[x]='\0';
            int nu=atoi(h);
            string s6=two(nu);
            cout<<s6<<s2<<endl;
        }
    }
    return 0;
}
