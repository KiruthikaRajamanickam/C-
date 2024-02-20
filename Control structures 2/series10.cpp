#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    cout<<a<<" ";
    {
        for(int i=1; i<n+n; i++)
        {
            if(i%2==0)
            {
                a=a+i;
                cout<<a<<" ";
            }
            
        }
    }
}
