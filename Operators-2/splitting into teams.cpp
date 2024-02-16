#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=a/b;
    d=a-(b*c);
    cout<<"The number of students in each team is "<<c<<" and left out is "<<d;
    return 0;
}
