#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+1;
 
int main()
{
    vector<int>freq(maxn,0);
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        freq[x]++;
    }
    vector<int>multiple(maxn,0);
    for(i=1;i<maxn;i++)
    {
        for(j=i;j<maxn;j=j+i)
        {
            if(freq[j])
            {
                multiple[i]+=freq[j];
            }
        }
    }
    for(j=maxn;j>=1;j--)
    {
        if(multiple[j]>1)
        {
            cout<<j<<endl;
            return 0;
        }
    }
    cout<<"1"<<endl;
}
