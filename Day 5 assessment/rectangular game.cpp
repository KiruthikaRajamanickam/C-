#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int result = 0;
    for(int i=2;i*i<= n;++i)
    {
        while(n%i == 0)
        {
            result+=n;
            n/=i;
        }
    }

    if(n>1)
    {
        result+=n;
    }
    cout<<result+1;
    return 0;
}
