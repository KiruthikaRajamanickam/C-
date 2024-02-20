#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1||a==3||a==5||a==7||a==9||a==11)
    {
        cout<<"Number of days is 31";
    }
    else if(a==4||a==6||a==8||a==10||a==12)
    {
        cout<<"Number of days is 30";
    }
    else if((b%4==0)&&(a==2))
    {
        cout<<"Number of days is 29";
    }
    else 
    {
        cout<<"Number of days is 28";
    }
    
}
