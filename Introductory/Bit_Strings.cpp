#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
#define int long long
int mod=1e9+7;

int32_t main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans=1;
    int a=2;
    //cout<<ans<<" "<<n<<" "<<a<<"\n";
    while(n)
    {
        if(n%2==1)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        n/=2;
        //cout<<ans<<" "<<n<<" "<<a<<"\n";
    }
    cout<<ans<<"\n";
    return 0;
}

