#include<iostream>
using namespace std;
int main()
{
    int r,c,t;
    cin>>r>>c>>t;
    if(t>r && t<=r*2)
    {
        cout<<"It is a mango tree";
    }
    else if(t>(r*c)-(2*r) && t<=(r*c)-r)
    {
        cout<<"It is a mango tree";
    }
    else
    {
        cout<<"It is not a mango tree";
    }
 
}
