#include<iostream>
using namespace std;
int main(){
     int i,a=0, j;
    for(i=101; i<=1000; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               a++;
               break;
           }
        }
        if(a==0 && i!=1)
            cout<<i<<" ";
        a = 0;
    }
}
