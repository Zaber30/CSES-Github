#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,i;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
   else if(n<=3)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(i=2;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        for(i=1;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}