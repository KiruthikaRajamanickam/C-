#include<iostream>
using namespace std;
int main()
{
    int a, b;
    b=1;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        if(a==0)
        {
            cout<<"0";
        }
        else
        {
            b=b*i;
        }
    }
    cout<<b;
}
