#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,i,s=0;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
         a=sqrt(arr[i]);
         if(a*a==arr[i])
         {
             s+=arr[i];
         }
    }
             cout<<s;
         
    return 0;
}
