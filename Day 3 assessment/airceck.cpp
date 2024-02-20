#include<iostream>
using namespace std;
int main()
{
    int fl,rl,rr,fr;
    cin>>fl>>rl>>rr>>fr;
    if(fl==33)
    {
        cout<<"Front-left : Untouched"<<'\n';
    }
    if(fl<33)
    {
        cout<<"Front-left : Inflate"<<'\n';
    }
    if(fl>33)
    {
        cout<<"Front-left : Deflate"<<'\n';
    }
    if(rl==32)
    {
        cout<<"Rear-left : Untouched"<<'\n';
    }
    if(rl<32)
    {
        cout<<"Rear-left : Inflate"<<'\n';
    }
    if(rl>32)
    {
        cout<<"Rear-left : Deflate"<<'\n';
    }
    if(rr==32)
    {
        cout<<"Rear-right : Untouched"<<'\n';
    }
    if(rr<32)
    {
        cout<<"Rear-right : Inflate"<<'\n';
    }
    if(rr>32)
    {
        cout<<"Rear-right : Deflate"<<'\n';
    }
    if(fr==33)
    {
        cout<<"Front-right : Untouched"<<'\n';
    }
    if(fr<33)
    {
        cout<<"Front-right : Inflate"<<'\n';
    }
    if(fr>33)
    {
        cout<<"Front-right : Deflate"<<'\n';
    }
   
  
    
}
