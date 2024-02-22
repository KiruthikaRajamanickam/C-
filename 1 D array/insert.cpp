#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cin>>a;
    cin>>b;
    if(a>=n)
    {
        cout<<"Invalid Input";
    }
    else
    {
    for(int i=1; i<=n; i++)
      {
        if(a==i)
        {
            cout<<b<<'\n';
        }
        cout<<arr[i]<<'\n';
          
      }
    }
    
    return 0;
    
}
