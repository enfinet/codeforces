#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>
#include <istream>
#include <ostream>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <bitset>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <utility>

using namespace std;

#define null 0
#define MOD 1000000007
#define MAX 1299710

#define s(a)        scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define sl(a)       scanf("%I64d",&a)
#define sf(a)       scanf("%f",&a)
#define sd(a)       scanf("%lf",&a)
#define ss(a)       scanf("%s",a)

#define p(a)        printf("%d",a)
#define pc(a)       printf("%c",a)
#define pl(a)       printf("%I64d",a)
#define pd(a)       printf("%lf",a)
#define ps(a)       printf("%s",a)

#define nl()        printf("\n");
#define sp()        printf(" ");

bool cmp(const pair<int ,int> &a, const pair<int ,int> &b)
{
    return a.second<=b.second;
}

int check[MAX];
int primes[100005];
int k=0;

void gen_sieve_primes(int limit)
{
    for (int p=2; p*p <= limit; p++) {
        if(!check[p]) {
            for(int mul = p; p*mul <= limit; mul++) {
                check[mul*p] = 1;
            }
        }
    }
    for(int i=2;i<=limit;i++)
        if(!check[i])primes[k++]=i;
}

int main()
{
    gen_sieve_primes(1299710);
    int n;
    s(n);
    for(int i=0;i<n;i++) {
        p(primes[i]);sp();
    }
    nl();
    return 0;
}
