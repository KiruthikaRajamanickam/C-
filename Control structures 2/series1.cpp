#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    a=7;
    b=5;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    {
        for (int i=3; i<=n; i++)
        {
            if(i%2==1)
            {
                a=a+1;
                cout<<a<<" ";
            }
            else
            {
                b=b+1;
                cout<<b<<" ";
            }
        }
    }
}
