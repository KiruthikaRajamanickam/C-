#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int counter = 1;
    for (int i = 0; i < n; i++) 
    {
        if (counter % 2 == 1) {
            cout << pow(counter, 3) << " ";
        } else {
            cout << pow(counter, 2) << " ";
        }
        counter++;
    }
    return 0;
}
