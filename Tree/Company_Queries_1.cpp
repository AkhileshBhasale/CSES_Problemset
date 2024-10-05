#include <bits/stdc++.h>
#include <algorithm>

#define int long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> list(30 , vector<int>(n+1 , -1));
    for(int i=2;i<=n;i++){
        cin>>list[1][i];
    }
    for(int j=2;j<=30;j++){
        for(int i=1;i<=n;i++){
            if(i+(1<<(j))-1 >=n){
                lift[i][j]=mod;
                continue;
            }
            lift[i][j]=min(lift[i][j-1] , lift[i+(1<<(j-1))][j-1]);
        }
    }
    return 0;
}