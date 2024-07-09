#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll i,j;
    ll a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
 
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);sort(b,b+m);
    j=0;
    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(j<m&&b[j]>=(a[i]-k)&&b[j]<=(a[i]+k))
        {
            cnt++;
            j++;
        }
        else if(j<m&&b[j]<a[i])
        {
            j++;
            i--;
        }
        if(i==n||j==n)
        {
            break;
        }
    }
    cout<<cnt<<endl;
}
