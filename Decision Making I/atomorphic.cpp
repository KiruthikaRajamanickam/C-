#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if((a*a)==(a%100))
    {
        cout<<"Automorphic";
    }
    else
    {
        cout<<"Not Automorphic Number";
    }
}
