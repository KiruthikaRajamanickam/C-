#include<iostream>
using namespace std;
int main()
{
    int si;
  cin>>si;
  int a = 65;
  int num = 0;
  for (int i = 1; i <= si; i++) {
    for (int j = si; j > i; j--) {
      cout << " ";
    }
    for (int k = 0; k < i * 2 - 1; k++) {
      if (k == 0 || k == 2 * i - 2) {
        cout << ((char)(a+num++));
      } else {
        cout << " ";
      }
    }
    num = 0;
    cout << "\n";
  }
  for (int i = 1; i < si; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = (si - i) * 2 - 1; k >= 1; k--) {
      if (k == 1 || k == (si- i) * 2 - 1) {
        cout << ((char)(a+num++));
      } else {
        cout << " ";
      }
    }
    num = 0;
    cout << "\n";
  }
  return 0;
}
