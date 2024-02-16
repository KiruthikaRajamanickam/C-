#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<fixed<<setprecision(6)<<a<<'\n';
    cout<<fixed<<setprecision(3)<<a<<'\n';
    cout<<fixed<<setprecision(2)<<a<<'\n';
    cout<<fixed<<setprecision(1)<<a<<'\n';
    return 0;
}
