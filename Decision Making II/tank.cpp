#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float r,h,amount,hrs,volume;
    cin>>r>>h>>amount>>hrs;
    volume=3.14*r*r*h;
    if(volume<amount*hrs)
    {
        cout<<fixed<<setprecision(1)<<"The tank can be filled within "<<hrs<<" hours";
    }
    return 0;
}
