#include<iostream>
using namespace std;
int main()
{
    char name[100];
    char game[100];
    cout<<"Name:\n";
    cin.getline(name, 100);
    cout<<"Game:\n";
    cin>>game;
    cout<<"My name is "<<name<<" and I love to play "<<game<<'\n';
}
