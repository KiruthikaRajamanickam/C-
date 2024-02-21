#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%10==a/100 || a/1000)
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Not Same";
    }
    return 0;
}
