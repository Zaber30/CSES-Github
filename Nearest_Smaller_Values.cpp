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
    stack<pair<ll,ll>>st;
    for(i=0;i<n;i++)
    {
        while(st.size()>0&&st.top().first>=a[i])
        {
            st.pop();
        }
        if(st.size()>0)
        {
            cout<<st.top().second<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        st.push({a[i],i+1});
    }
}