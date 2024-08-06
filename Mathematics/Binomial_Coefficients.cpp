#include <bits/stdc++.h>
#include <algorithm>

#define mod 1000000007
using namespace std;

vector<int> fact(1e6+1);

long long inv(long long a){
    long long b=mod-2;
    long long p=mod;
    a %= p;
    if (a == 0) return 0;
    long long product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b >> 1
    }
    return product;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    fact[0]=1;
    for(int i=1;i<=1e6;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int b,a;
        cin>>a>>b;
        cout<<(((fact[a] * inv(fact[b])) % mod) * inv(fact[a-b])) % mod<<"\n";
    }
    return 0;
}