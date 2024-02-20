#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cin>>num;
    {
         while(num!=0)
              {
                   sum=sum+num%10;
                   num=num/10;
               }
          if(num==sum)
               {
        cout<<"Harshard number";
               }
          else
         {
        cout<<"Not Harshard number";
         }
    }
}
