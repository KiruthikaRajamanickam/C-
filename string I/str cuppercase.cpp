#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    int i;
    getline(cin,s1);
    cout<<"String in uppercase is ";
    for(int i=0; i<s1.size(); i++)
    {
        s1[i]=toupper(s1[i]);
        cout<<s1[i];
    }
        
}
