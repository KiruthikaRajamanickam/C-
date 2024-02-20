#include<iostream>
using namespace std;
int main()
{
    int a,b=0,i;
    cin>>a;
    for(i=0; i<a; i++)
    {
        b=b+a;
    }
    if(b == a)
    {
        cout<<"Fibonacci number";
    }
    else
    {
        cout<<"Not Fibonacci number";
    }
}
