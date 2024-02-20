#include<iostream>
using namespace std;
int main()
{
    int n,i,a=6;
    cin>>n;
    int count=3;
    for(i=0; i<n; i++)
    {
        cout<<a<<" ";
        a=a+count;
        count=count+2;
    }
}
