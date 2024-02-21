#include<iostream>
using namespace std;
int main()
{
    int n;
int eve=0, odd=0,i;
cin>>n;
int arr[n];

   for(i=0; i<n; i++)
   {
      cin>>arr[i];
   }
       for(i=0; i<n; i++)
       {
           
         if(arr[i]%2==0)
           {
              eve+=1;
            }
          else
           {
               odd+=1;
           }
           
  }
   cout<<"Odd: "<<odd<<endl;
   cout<<"Even: "<<eve;
   return 0;
  
}
