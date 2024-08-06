#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
// #define ll long long
 #define int long long
const int mod=1e9+7;

int xpow(int x, unsigned int y){
    int res=1;
    while(y>0){
        if (y&1) res= (res*x); y=y>>1; x=(x*x);
    }
    return res;
}

int32_t main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        int dig=1;
        while(a>(xpow(10,dig-1)*9)*dig)
        {   
            //cout<<a<<"\n";
            a-=(xpow(10,dig-1)*9)*dig;
            //cout<<(xpow(10,dig-1)*9)*(dig)<<"\n";
            //cout<<a<<"\n";
            dig++;
        }
        //cout<<a<<"\n";
        a--;
        int val=a/dig;
        int md=a%dig;
        //cout<<val<<" "<<md<<" ";
        int num=xpow(10,(dig-1))+val;
        //cout<<num<<" ";
        string s=to_string(num);
        //cout<<val<<" ";
        //reverse(s.begin(),s.end());
        cout<<s[md]<<"\n";
    }
    return 0;
}

