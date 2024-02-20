#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(isdigit(a))
    {
        cout<<"Number";
    }
    else if((isupper(a)))
    {
    cout<<"Upper";
    }
    else if(islower(a))
    {
    cout<<"Lower";
    }
    else
    {
        cout<<"Symbol";
    }
    
    
}
