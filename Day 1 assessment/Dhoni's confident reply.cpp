#include<iostream>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cout<<"Banerjee's Question:\n";
    cin.getline(str1, 100);
    cout<<"Dhoni's Reply:\n";
    cin.getline(str2, 100);
    cout<<"For Banerjee's question \""<<str1<<"\" Dhoni's confident reply was \""<<str2;
    return 0;
}
