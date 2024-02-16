#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<floor(a)<<'\n';
    cout<<fixed<<setprecision(1)<<ceil(a)<<'\n';
    cout<<fixed<<setprecision(1)<<floor(a)<<'\n';
    return 0;
}
