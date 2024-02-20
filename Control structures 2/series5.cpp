#include<iostream>
using namespace std;
int main()
{
    int n,a=2,i,b=0;
    cin>>n;
    cout<<a<<" ";
    for(int i=2; i<=n; i++)
    {
        a=(a*2)-b;
        cout<<a<<" ";
        b++;
    }
}
