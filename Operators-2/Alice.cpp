#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    b=(a%10)+(a/10)%100;
    cout<<"Alice must go in path-"<<b;
}
