#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    j=(a-(a*b/100)+c);
    k=(d-(d*e/100)+f);
    l=(g-(g*h/100)+i);
    cout<<"In Flipkart Rs."<<j<<'\n';
    cout<<"In Snapdeal Rs."<<k<<'\n';
    cout<<"In Amazon Rs."<<l<<'\n';
    if((j<k)&&(j<l))
    {
      cout<<"He will prefer Flipkart";  
    }
    else if((k<j)&&(k<l))
    {
        cout<<"He will prefer Snapdeal";
    }
    else
    {
        cout<<"He will prefer Amazon";
    }
    
}
