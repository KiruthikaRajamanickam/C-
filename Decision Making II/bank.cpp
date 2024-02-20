#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    switch(b)
    {
        case 1:cout<<a+c;
        break;
        case 2: 
        if(a<c)
        {
            cout<<"Insufficient Balance";
        }
        else
        {
            cout<<a-c;
        }
        break;
    }
    if(b>2)
    {
        cout<<"Invalid Input";
    }
    return 0;
}
