#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
        cout<<j+1<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}
