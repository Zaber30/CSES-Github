#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,x;
    ll i,j,k,l;
    cin>>n>>x;
    ll a[n];
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            k=j+1;
            l=n-1;
            while(k<l)
            {
               sum=(v[i].first+v[j].first+v[k].first+v[l].first);
               if(sum==x)
               {
                   cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[k].second+1<<" "<<v[l].second+1<<endl;
                   return 0;
               }
               else if(sum>x)
               {
                   l--;
               }
               else
               {
                   k++;
               }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
 
}