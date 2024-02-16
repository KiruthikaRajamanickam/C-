#include<iostream>
using namespace std;
int main()
{
    int days,year,y,w,y1,w1;
    cin>>days;
    year=365;
    y=days/year;
    y1=days%year;
    w=y1/7;
    w1=y1%7;
    cout<<y<<"\n"<<w<<"\n"<<w1;
    return 0;
}
