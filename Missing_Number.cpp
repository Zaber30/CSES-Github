#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back();
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    int n;
    cin>>n;
    int a[n],f[200001]={0};
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(f[i]==0)
        {
            cout<<i<<endl;
            break;
        }

    }
}
