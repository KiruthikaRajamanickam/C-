#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int a,b=0,avge;
    float c=0,d=0,e=0,avgo=0;
    {
        while(a!=-1 )
        {
            cin>>a;
            if(a%2==0 && a!=0)
            {
               b=b+a;
               d++;
            }
              
             if(a%2!=0 && a!=0)
            {
               c=c+a;
               e++;
            }
        }
        avgo=((c+1)/(e-1));
        avge=(b/d);
        cout<<b<<'\n';
        cout<<c+1<<'\n';
        cout<<fixed<<setprecision(2)<<avge<<'\n';
        cout<<fixed<<setprecision(2)<<avgo<<'\n';
    }
}
