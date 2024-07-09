#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back();
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    faster;
    ll n;
    cin>>n;
    while(1)
    {
        if(n==1)
        {
            cout<<n<<endl;
            break;
        }
        else if(n%2==0)
        {
            cout<<n<<" ";
            n=n/2;

        }
        else if(n%2!=0)
        {
            cout<<n<<" ";
            n=n*3+1;

        }
    }


}
