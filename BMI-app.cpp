#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float w;
    float h;

    cout << "Podaj swoja waga: ";
    cin >> w;
    cout << "Podaj swoj wzrost: ";
    cin >> h;

    float bmi = w / pow(h, 2);

    cout << "\nTwoje BMI to: " << bmi;

    if (bmi < 18.5) {
        cout << "\nMasz niedowage";
    }
    if (bmi >= 18.5 && bmi < 25) {
        cout << "\nJestes zdrowy";
    }
    if (bmi >= 25 && bmi < 30) {
        cout << "\nMasz nadwage";
    }
    if (w <= 0 && h <= 0) {
        cout << "\nZle dane";
    }
    
    return 0;
}
