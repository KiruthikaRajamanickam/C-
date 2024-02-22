#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int a[n];
     a[0]=10;
     a[1]=5;
     for(int i=2;i<n;i++){
         if(i%2==0){
         a[i]=a[i-2]+50;
         }else{
             a[i]=a[i-2]+10;
         }
     }
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
        return 0;
}
