#include<iostream>
using namespace std;
int main()
{
    int n1,n2,sum1=0,sum2=0;
    cin>>n1;
    int a[n1];
        for(int i=0; i<n1; i++)
        {
        cin>>a[i];
        sum1=sum1+a[i];
         }
    cin>>n2;
    int b[n2];
        for(int i=0; i<n2; i++)
        {
        cin>>b[i];
        sum2=sum2+b[i];
        }
    if(sum1==sum2)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Not Same";
    }
    
    return 0;
}
