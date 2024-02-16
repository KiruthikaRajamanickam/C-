#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float p,n,r,si;
    cin>>p>>n>>r;
    si=(p*n*r)/100;
    cout<<fixed<<setprecision(2)<<si;
    return 0;
    }
