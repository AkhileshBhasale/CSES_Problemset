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
    int ar[n+1]={0};
    for(int i=0;i<=n;i++)
    {
        for(int j=max(0ll,i-6);j<i;j++)
        {   
            //cout<<j<<" "<<ar[j]<<"\n";
            if(j==0)
            {
                ar[i]+=1;
                continue;
            }
            ar[i]+=ar[j]%mod;
        }
        ar[i]=ar[i]%mod;
    }
    cout<<ar[n]<<"\n";
    
    return 0;
}

