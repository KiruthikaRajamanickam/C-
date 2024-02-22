#include<iostream>
using namespace std;
int main()
{
    int n, e, c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>e;
    for(int j=0; j<n; j++)
    {
        if(a[j]==e)
        {
             c++;
        }
    }
    if(c>0)
    {
        cout<<e<<" is present in the array";
    }
    else
    {
        cout<<e<<" is not present in the array";
    }
}
