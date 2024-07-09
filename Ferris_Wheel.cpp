#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,x,i,j,k;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll fa=0,la=n-1,cnt=0;
    while(fa<=la)
    {
        if((a[fa]+a[la])<=x)
        {
           cnt++;
           fa++;
           la--;
        }
        else
        {
              la--;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
