#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
      int i,j;
      vector<int>cnt(26,0);
 
 
    for(i=0;i<s.size();i++)
    {
        cnt[s[i]-'A']++;
    }
     ll oddpos=-1;
    for(i=0;i<26;i++)
    {
         if(cnt[i]%2==1)
         {
            if(oddpos==-1)
            {
                oddpos=i;
            }
            else
            {
                cout<<"NO SOLUTION"<<endl;
                return 0;
            }
         }
 
    }
 
    if(oddpos!=-1&&s.size()%2==0)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(oddpos==-1&&s.size()%2==1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
     string ans;
    for(i=0;i<26;i++)
    {
        for(j=0;j<cnt[i]/2;j++)
        {
            ans+=(char)(i+'A');
        }
    }
     cout<<ans;
     if(oddpos!=-1)
     {
         cout<<(char)('A'+oddpos);
     }
     reverse(ans.begin(),ans.end());
     cout<<ans<<endl;
 
 
 
}