#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll i,j,k;
    ll sum=0;
    ll a[n];
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++)
    {
        j=i+1;
        k=n-1;
        while(j<k)
        {
            sum=(v[i].first+v[j].first+v[k].first);
            if(sum==x)
            {
                cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[k].second+1<<endl;
                return 0;
            }
            else if(sum>x)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
