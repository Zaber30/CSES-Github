#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,x;
    ll i,j,k;
    cin>>n>>x;
    ll a[n];
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back({a[i],i});
 
    }
     sort(v.begin(),v.end());
    i=0,j=n-1;
    ll sum=0;
    while(i<j)
    {
       sum=(v[i].first+v[j].first);
       if(sum==x)
       {
           cout<<v[i].second+1<<" "<<v[j].second+1<<endl;
           return 0;
       }
       else if(sum>x)
       {
           j--;
       }
       else
       {
           i++;
       }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
 
 
}
