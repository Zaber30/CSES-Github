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
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        auto it=upper_bound(v.begin(),v.end(),a[i]);
        if(it==v.end())
        {
            v.push_back(a[i]);
        }
        else
        {
            *it=a[i];
        }
    }
    cout<<v.size()<<endl;
}