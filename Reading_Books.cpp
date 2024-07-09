#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0,mx=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        mx=max(mx,a[i]);
    }
    cout<<max(sum,2*mx)<<endl;
 
}
