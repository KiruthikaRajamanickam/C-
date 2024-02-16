#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x1,x2,x3,y1,y2,y3;
    float a,b;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    a=(x1+x2+x3)/3;
    b=(y1+y2+y3)/3;
    cout<<fixed<<setprecision(1)<<a<<'\n';
    cout<<fixed<<setprecision(1)<<b;
    return 0;
}
