#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string b;
    cin>>b;
    sort(b.begin(),b.end());
    cout<<"The sorted string is "<<b;
}
