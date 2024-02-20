#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=b+d;
    f=a+c;
    while(e>=100)
    {
        e=e-100;
        f=f+1;
    }
        cout<<f<<" dollars"<<'\n'<<e<<" cents";
    }
