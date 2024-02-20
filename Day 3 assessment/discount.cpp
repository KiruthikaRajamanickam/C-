#include<iostream>
using namespace std;
int main()
{
    int r,c,t;
    cin>>r>>c>>t;
    if(t<=r || t%r==1||t%r==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
   
}
