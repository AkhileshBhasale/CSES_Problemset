#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
//#define int long long
int mod=1e9+7;

int32_t main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<int ,int> m;
    int ans=n;
    m[1]=1;
    m[2]=2;
    m[3]=3;
    //1 start
    //2 middle
    //3 final
    vector<pair<int , int>> p;
    if(ans%2==0)
    {
        p.push_back(make_pair(m[1],m[2]));
        n--;
        while(n)
        {
            p.push_back(make_pair(1,(n%2)+2));
            int sz=p.size();
            if(n%2==0)
            {
                m[2]=1;
                m[1]=3;
                m[3]=2;
            }
            else
            {
                m[3]=1;
                m[1]=2;
                m[2]=3;
            }
            for(int i=0;i<sz-1;i++)
            {
                p.push_back(make_pair(m[p[i].first],m[p[i].second]));
            }
            //swap(m[2],m[3]);
            n--;
        }
    }
    else
    {
        p.push_back(make_pair(m[1],m[3]));
        n--;
        while(n)
        {
            p.push_back(make_pair(1,(n%2)+2));
            int sz=p.size();
            if(n%2==0)
            {
                m[2]=1;
                m[1]=3;
                m[3]=2;
            }
            else
            {
                m[3]=1;
                m[1]=2;
                m[2]=3;
            }
            for(int i=0;i<sz-1;i++)
            {
                p.push_back(make_pair(m[p[i].first],m[p[i].second]));
            }
            //swap(m[2],m[3]);
            n--;
        }
    }
    cout<<int(p.size())<<"\n";
    for(auto i : p)
    {   
        cout<<i.first<<" "<<i.second<<"\n";
        
    }
    return 0;
}

