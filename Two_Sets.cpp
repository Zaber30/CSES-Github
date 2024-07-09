#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    ll i,j,k;
    cin>>n;
    ll sum=(n*(n+1))/2;
    if(sum%2)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        map<ll,ll>mp;
        vector<int>v;
        sum=sum/2;
        ll m=n;
        while(m>0){
        if((sum-m)>=0)
        {
            v.push_back(m);
            sum=sum-m;
            mp[m]++;
            m--;
 
 
        }
        else
        {
            m--;
        }
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<n-v.size()<<endl;
        for(i=1;i<=n;i++)
        {
            if(mp[i]!=1)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
 
    }
}
