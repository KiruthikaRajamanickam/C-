#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
     if(m>n)
     {
         cout<<"Invalid Input";
     }
     else
     {
         for(int i=0; i<n; i++)
         {
             if(arr[i]==m)
             {
                 int deleteElementsInRange(arr[i]);
             }
             else
             {
                 cout<<arr[i]<<"\n";
             }
         }
     }
     return 0;
}
