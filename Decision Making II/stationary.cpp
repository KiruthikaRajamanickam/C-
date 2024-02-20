#include<iostream>
using namespace std;
int main()
{
    string a;
    int b,c,d;
    cin>>a>>b>>c>>d;
    int s=d*c;
    int g=b-d;
    cout<<"Amount for "<<d<<" "<<a<<" is "<<s;
    cout<<"\nRemaining number of "<<a<<" present in stock is "<<g;
    return 0;
}
