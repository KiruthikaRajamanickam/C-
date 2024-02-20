#include<iostream>
using namespace std;
int main()
{
    int a,b, sum=0,sum1=0, c,d;
    cin>>a>>b;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
            
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sum1=sum1+i;
            
        }
    }
    c=sum/a;
    d=sum1/b;
   
    if(c==d)
    {
        cout<<"Friendly Pair";
    }
    else 
    {
        cout<<"Not Friendly Pair";
    }
}
