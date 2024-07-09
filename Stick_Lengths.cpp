#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //test case
    //3,4,5,6,7//for 4=7//for5=6 //for 6=10
    sort(a,a+n);
    int median=a[n/2];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(median-a[i]);
    }
    cout<<sum<<endl;
 
}