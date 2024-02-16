#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float a,b,wcf;
    cin>>a>>b;
    wcf=35.74+0.6215*a+(0.4275*a - 35.75)*pow(b,0.16);
    cout<<fixed<<setprecision(2)<<wcf;
}
