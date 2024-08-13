#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
#define int long long
const int mod=1e9+7;

int32_t main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar , ar+n);
    set<int> s;
    for(int i=0;i<n;i++){
        stack<int> temp;
        for(auto numInS:s){
            temp.push(ar[i]+numInS);
        }
        while(!temp.empty()){
            s.insert(temp.top());
            temp.pop();
        }
        s.insert(ar[i]);
    }
    cout<<s.size()<<'\n';
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    return 0;
}