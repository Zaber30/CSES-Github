#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<unique(v.begin(),v.end())-v.begin()<<endl;
}
