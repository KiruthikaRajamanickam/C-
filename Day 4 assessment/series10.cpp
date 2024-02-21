#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        m=0;
        if(i%2==0)
        {
            cout<<(pow(i,2)-2)<<" ";
        }
        else
        {
            cout<<(pow(i,2)-1)<<" ";
        }
    }
     //type your code;
        return 0;
}
