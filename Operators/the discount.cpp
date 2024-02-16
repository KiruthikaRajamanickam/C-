#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a+b;
    e=(d*c)/100;
    f=d-e;
    g=d-f;
    cout<<fixed<<setprecision(2)<<d<<'\n';
    cout<<fixed<<setprecision(2)<<f<<'\n';
    cout<<fixed<<setprecision(2)<<g<<'\n';
    return 0;
}
