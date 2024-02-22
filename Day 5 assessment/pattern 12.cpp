#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        if( i==0 )
        {
            cout<<"C";
        }
        else if( i==n-1)
        {
            cout<<"K";
        }
        else if((j == 0) || j==(n-1))
        {
             cout<<"S";
        }
        else
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
