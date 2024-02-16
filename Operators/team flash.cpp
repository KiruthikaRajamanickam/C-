#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    e=(a+c)/2;
    f=(b+d)/2;
    cout<<fixed<<setprecision(1)<<e<<'\n';
    cout<<fixed<<setprecision(1)<<f;
    return 0;
}
