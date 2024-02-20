#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float o,t,m,n;
    cin>>x>>y;
    cin>>o>>t>>m;
    n=(x*o)+(y*t);
    if(n>m && o<t && t<m)
    {
        cout<<"Monthly Pass";
    }
    else if(n<m && o<t && t<m)
    {
        cout<<"One way pass + Two way pass";
    }
    else
    {
        cout<<"Invalid Input";
    }
    return 0;
}
