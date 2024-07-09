#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n];
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back({a[i],i});
 
    }
    sort(v.begin(),v.end());
     ll temp=-1,cnt=1;
    for(i=0;i<n-1;i++)
    {
        if(v[i+1].second<v[i].second)
        {
            cnt++;
        }
        temp=v[i].second;
 
    }
    cout<<cnt<<endl;
 
 
}