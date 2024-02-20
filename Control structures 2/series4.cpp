#include<iostream>
using namespace std;
int main()
{
    int a,i=0,o=0,b=0;
    cin>>a;
    cout<<b<<" ";
    for(i=3; i<=a+a; i++)
    {
        if(i%2==1)
        {
            o=i+b;
            b=o;
            o=b;
            cout<<o<<" ";
        }
        else
        {
            o=o+0;
        }
        }
    }
