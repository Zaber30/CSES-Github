#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    ll i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll dp[x+1]={0};
    dp[0]=1;
    for(i=1;i<=x;i++)
    {
        for(auto coin:v)
        {
            if(coin<=i)
            {
                dp[i]=(dp[i]+(dp[i-coin]))%mod;
            }
        }
    }
    cout<<dp[x]<<endl;
}
