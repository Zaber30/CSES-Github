#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ll n,i,j,total=0,ans=INT_MAX;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        total=total+a[i];
    }
    for(i=0;i<1<<n;i++)
    {
        ll sum=0;
        for(j=0;j<n;j++)
        {
            if(i&1<<j)
            {
                sum=sum+a[j];
            }


        }
        ll curr=abs((total-sum)-sum);
        ans=min(curr,ans);
        

    }
    cout<<ans<<endl;

}
