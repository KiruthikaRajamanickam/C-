#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
           even=even+1; 
        }
        else if(a[i]%2!=0)
        {
            odd=odd+1;
        }
    }
    if(even == n)
    {
        cout<<"Even";
        
    }
    else if(odd==n)
    {
        cout<<"Odd";
    }
    else{
        cout<<"Mixed";
    }
    
}
