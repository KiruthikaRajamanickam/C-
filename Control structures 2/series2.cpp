#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,sum=0;
    cin>>n;
    a=1;
    b=2;
    cout<<a<<" "<<b<<" ";
    for(i=3; i<=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<" ";
    }
}
