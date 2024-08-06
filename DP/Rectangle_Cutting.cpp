#include <bits/stdc++.h>
#include <algorithm>

#define int long long
using namespace std;

int32_t main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<vector<int>> dp(a+1 , vector<int>(b+1 , 0));
    dp[1][1]=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==1 && j==1) continue;
            int small=min(i , j);
            int ans=i*j;
            for(int k=1;k<=small;k++){
                ans=min(ans , 1+dp[i-k][j-k]+dp[1][j-k]+dp[i-k][1]);
            }
            dp[i][j]=ans;
        }
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<dp[i][j]<<" \n"[j==b];
        }
    }
    cout<<dp[a][b]<<"\n";
    return 0;
}