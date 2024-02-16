#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g;
    cin>>a;
    cin>>b;
    cin>>c;
    d=(a*b*c)/100;
    e=a+d;
    f=(d*2)/100;
    g=e-f;
    cout<<fixed<<setprecision(2)<<d<<'\n';
    cout<<fixed<<setprecision(2)<<e<<'\n';
    cout<<fixed<<setprecision(2)<<f<<'\n';
    cout<<fixed<<setprecision(2)<<g;
    return 0;
}
