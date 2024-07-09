#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
     ll a[n];
    ll i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            sum+=(a[i-1]-a[i]);
            a[i]=(a[i]+(a[i-1]-a[i]));
        }
    }
    cout<<sum<<endl;
}
