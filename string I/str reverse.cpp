#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    cout<<"The reversed string is "<<str;
    return 0;
}
