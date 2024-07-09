#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+10,mod=1e9+9;
ll p=41;
vector<ll>power(N);
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int i,j,k;
    if(s.size()<t.size())
    {
        cout<<"0"<<endl;
        return 0;
    }
    vector<ll>h(N,0);
    power[0]=1;
    for(i=1;i<N;i++)
    {
        power[i]=(power[i-1]*p)%mod;
 
    }
 
    for(i=0;i<s.size();i++)
    {
        h[i+1]=(h[i]+(s[i]-'a'+1)*power[i])%mod;
    }
    ll has=0;
    for(i=0;i<t.size();i++)
    {
        has=(has+(t[i]-'a'+1)*power[i])%mod;
    }
    ll curhas=0;
    int cnt=0;
    for(i=0;i+t.size()-1<s.size();i++)
    {
      curhas=(h[i+t.size()]-h[i]+mod)%mod;
      if(curhas==(has*power[i])%mod)
      {
          cnt++;
      }
    }
    cout<<cnt<<endl;
 
 
}
