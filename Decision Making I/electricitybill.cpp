#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=200)
    {
        cout<<"Rs."<<ceil((a*0.5));
    }
    else if(a<=400)
    {
        cout<<"Rs."<<ceil(((a*0.65)+100));
    }
    else if(a<=600)
    {
        cout<<"Rs."<<ceil(((a*0.80)+200));
    }
    else
    {
        cout<<"Rs."<<ceil(((a*1.25)+425));
    }
    
}
