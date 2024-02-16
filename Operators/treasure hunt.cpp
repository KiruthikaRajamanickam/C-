#include<iostream>
using namespace std;
int main()
{
    int c,fin,stone;
    cin>>c>>fin>>stone;
    int o1,o2,o3;
    o1=((c*fin)/100);
    cout<<o1<<'\n';
    o2=(((c-o1)*stone)/100);
    cout<<o2<<'\n';
    o3=((c-o1-o2)/3);
    cout<<o3<<'\n';
    return 0;
}
    
