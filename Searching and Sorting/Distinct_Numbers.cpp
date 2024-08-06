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
    int t;
    cin>>t;
    set<int> s;
    bool flag =false;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        s.insert(n);
    }
    cout<<s.size()<<"\n";
    return 0;
}

