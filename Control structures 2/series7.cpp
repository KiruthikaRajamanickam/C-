#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=10,b=5;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++)
    {
    
        if(i%2==1)
        {
            a=a+50;
        cout<<a<<" ";
         }
    else
    {
        b=b+10;
        cout<<b<<" ";
    }
//return 0;
    }
}
