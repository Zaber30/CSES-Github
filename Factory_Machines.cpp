#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll check(ll a[],ll n,ll t,ll mid)
{
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum=sum+(mid/a[i]);
        if(sum>=t)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    ll n,t,i,j,k,mx=0;
    cin>>n>>t;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    ll lo=1,hi=(mx*t)+1,ans=hi;
    while(lo<=hi)
    {
       ll mid=lo+(hi-lo)/2;
        if(check(a,n,t,mid))
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
}