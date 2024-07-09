#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define INF 1e9
int main()
{
    ll n,i,j;
    cin>>n;
    ll temp;
    vector<ll>dp(n+1,INF);
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        temp=i;
        while(temp)
        {
            ll r=temp%10;
            temp=temp/10;
            dp[i]=min(dp[i],dp[i-r]+1);
        }
    }
    cout<<dp[n]<<endl;
}