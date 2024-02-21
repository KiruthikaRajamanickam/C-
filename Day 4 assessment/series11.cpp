#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a=0.5;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<a;
            continue;
        }
        else
        {
            float t=pow(3,i-1);
            float x=t+a;
            a=x;
            cout<<" "<<x;
        }
    }
}
