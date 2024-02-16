#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,l,b,x;
    float r;
    cin>>a>>l>>b>>r>>x;
    cout<<pow(a,2)<<'\n';
    cout<<l*b<<'\n';
    x=(3.14*r*r);
    cout<<fixed<<setprecision(2)<<x;
    return 0;
    
}
