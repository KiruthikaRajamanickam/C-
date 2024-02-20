#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c>=60)
    {
        b=b+1;
        c=c-60;
    }
    else if(b>=60)
    {
        a=a+1;
        b=b-60;
        
    }
    
    cout<<"Total Number of hours is "<<a<<'\n';
    cout<<"Total Number of minutes is "<<b<<'\n';
    cout<<"Total Number of seconds is "<<c;
    return 0;
}
