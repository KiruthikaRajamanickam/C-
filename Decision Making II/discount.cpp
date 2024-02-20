#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     float a;
     int b;
     cin>>a>>b;
     switch(b)
     {
         case 1:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*20)/100))<<".";
         break;
         case 2:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<a<<".";
         break;
         case 3:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*10)/100))<<".";
         break;
         case 4:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*10)/100))<<".";
         break;
         case 5:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<a<<".";
         break;
         case 6:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*75)/100))<<".";
         break;
         case 7:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*75)/100))<<".";
         break;
         case 8:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<a<<".";
         break;
         case 9:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<a<<".";
         break;
         case 10:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*30)/100))<<".";
         break;
         case 11:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*30)/100))<<".";
         break;
         case 12:
         cout<<"Zack's father needs to pay Rs."<<fixed<<setprecision(2)<<(a-((a*35)/100))<<".";
         break;
         default:
         cout<<"Invalid";
         break;
     }
        return 0;
}
