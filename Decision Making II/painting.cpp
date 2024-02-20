#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,wall,first,second;
    cin>>a>>b>>c>>d>>e>>f;
    wall=(a*b);
    first=(c*d);
    second=(e*f);
    if((wall)>((first)+(second)))
    {
        cout<<"Karthi can fix both painting";
    }
    else
    {
        cout<<"Karthi cannot fix both painting";
    }
    return 0;
}
