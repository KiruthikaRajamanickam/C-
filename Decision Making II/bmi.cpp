#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cin >> weight;
    cin >> height;
    height = height / 100.0; 
    double bmi = weight / (height * height);
    if (bmi < 18.5) {
        cout << "You are underweight. Have an apple daily." << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "You are normal. Go walking daily and maintain it." << endl;
    } else {
        cout << "You are obese. Go to doctor" << endl;
    }
    return 0;
}
