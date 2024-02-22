#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"C";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"S";
        }
        for(int p=1;p<=i;p++)
        {
            cout<<"K";
        }cout<<"\n";
    }
}
