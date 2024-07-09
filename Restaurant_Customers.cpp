#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll fi,la;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>fi>>la;
        v.push_back({fi,1});
        v.push_back({la,-1});
    }
    sort(v.begin(),v.end());
    ll cnt=0,ans=0;
    for(i=0;i<2*n;i++)
    {
        if(v[i].second==-1)
        {
            cnt-=1;
            ans=max(ans,cnt);
        }
        else
        {
            cnt+=1;
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
}