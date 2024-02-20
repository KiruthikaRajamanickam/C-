#include<iostream>
using namespace std;
int main()
{
    int value ,sum=0;
    //cin>>value;
    {
    while (true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }
        sum+=value;
    }
    cout<<sum;
}
return 0;
}
