#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<=n; i++)
    {
        cin>>a[i];
    }
    unordered_set<int> distinctElements;
    for(int i =0; i<n; i++)
    {
        distinctElements.insert(a[i]);
    }
    cout<<distinctElements.size()<<endl;
    return 0;
}
