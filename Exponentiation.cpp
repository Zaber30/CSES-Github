#include<bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int a,b,result=1;
        cin>>a>>b;
        while(b!=0)
        {
            if(b%2==1)
            {
                result=(result*a)%mod;
                b=b-1;
            }
            else
            {
                a=(a*a)%mod;
                
                b=b/2;
            }
        }
        cout<<result<<endl;
    }
}
