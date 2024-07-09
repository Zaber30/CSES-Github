#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define INF 1e9
int main()
{
    ll n,x;
    ll i,j,k;
    cin>>n>>x;
    vector<ll>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    vector<ll>dp(x+1,INF);
    dp[0]=0;
 
    for(i=1;i<=x;i++)
    {
        for(auto u:v)
        {
            if((i-u)>=0)
            {
               dp[i]=min(dp[i],dp[i-u]+1);
 
 
            }
 
        }
    }
    if(dp[x]==INF)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<dp[x]<<endl;
    }
 
}
