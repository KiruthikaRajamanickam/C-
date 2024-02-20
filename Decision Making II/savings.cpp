#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,tot,sav;
    cin>>a>>b>>c>>d>>e;
    tot=b+c+d+e;
    sav=a-tot;
    if(sav<0)
    {
        cout<<"He wants to work hard";
    }
    else
    {
        cout<<"He can save the money";
    }
}
