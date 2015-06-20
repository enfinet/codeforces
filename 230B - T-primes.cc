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

int temp[1000001];
int size;

void gen_primes(int MAX)
{
    int i,j;
    temp[0]=temp[1]=1;
    for(i=2;i<MAX; i++)
        if(!temp[i]) {
            for(j=i;(long long)j*i<MAX; j++)
                    temp[i*j]=1;
        }
}

int main()
{
    gen_primes(1000001);
    int n;
    s(n);
    while(n--) {
        long long num;
        cin>>num;
        long long ans=(long long)sqrt((long long)num);
        if(ans*ans==num) {
            if(!temp[ans])printf("YES\n");
            else printf("NO\n");
        } else printf("NO\n");
    }
    return 0;
}
