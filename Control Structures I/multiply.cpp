#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=0; i<b; i++)
    {
        cout<<a<<" * "<<i+1<<" = "<<(a*(i+1))<<'\n';
    }
}
