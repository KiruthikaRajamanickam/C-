#include<iostream>
using namespace std;
int main()
{
    int boat,adults,child,a,c,d;
    cin>>boat>>adults>>child;
    a=75;
    c=50;
    d=((adults*a)+(child*c));
    if(d<=boat)
    {
        cout<<"Boat is Stable";
    }
    else
    {
        cout<<"Boat will drown";
    }
    
}
