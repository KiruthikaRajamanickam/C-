#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int d,s;
    float m, a_b, b_s, a_s, ma1;
    char b;
    cin>>d>>s>>m>>b;
    if(b == 'B')
    {
        a_b = d/m;
        b_s = (s - d)/m;
        cout<<fixed<<setprecision(2)<<a_b<<"\n";
        cout<<fixed<<setprecision(2)<<b_s;
    }
    if(b == 'A')
    {
        a_s = s/m;
        cout<<fixed<<setprecision(2)<<a_s<<"\n";
        cout<<"0.00";
    }
}
