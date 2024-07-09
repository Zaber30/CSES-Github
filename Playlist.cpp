#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll start=0,ans=0;
    set<ll>s;
    for(i=0;i<n;i++)
    {
        while(s.count(a[i]))
        {
            s.erase(a[start]);
            start++;
        }
        s.insert(a[i]);
        ans=max<ll>(ans,s.size());
    }
    cout<<ans<<endl;
}