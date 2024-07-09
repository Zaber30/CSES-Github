#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;
int main()
{
   ll n;
   cin>>n;
   ll sum=1,i;
   for(i=1;i<=n;i++)
   {
       sum=(sum*2)%mod;
   }
   cout<<sum<<endl;
}