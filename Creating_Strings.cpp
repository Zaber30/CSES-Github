#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<string>v;
    //cout<<s<<endl;
    sort(s.begin(),s.end());
    int cnt=0;

    do
    {
        v.push_back(s);
        cnt++;

    }
    while (next_permutation(s.begin(),s.end()));
    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;

}
