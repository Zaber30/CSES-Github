#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s;
    cin>>s;
    int i,j;
    int maxi=0,cnt=1;
    for(i=0;i<s.size()-1;i++)
    {
         if(s[i]!=s[i+1])
         {
             maxi=max(maxi,cnt);
             cnt=1;
         }
         else
         {
             cnt++;
         }
 
    }
    maxi=max(maxi,cnt);
    cout<<maxi<<endl;
}