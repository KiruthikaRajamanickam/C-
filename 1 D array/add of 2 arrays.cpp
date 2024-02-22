#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    int arr[n],b[n];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++ )
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        sum=arr[i]+b[i];
        cout<<sum<<" ";
    }
    return 0;
    
}
