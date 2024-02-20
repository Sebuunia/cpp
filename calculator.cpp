#include <iostream>

using namespace std;

int main()
{
char operacja;
float num1;
float num2;

cout << "Podaj pierwsza liczbe: ";
cin >> num1;
cout << "Podaj druga liczbe: ";
cin >> num2;

cout << "Wybierz operator: +, -, *, /: ";
cin >> operacja;

switch (operacja) {
case '+':
    cout << "Wynik: " << num1 + num2;
    break;
case '-':
    cout << "Wynik: " << num1 - num2;
    break;
case '*':
    cout << "Wynik: " << num1 * num2;
    break;
case '/':
    if (num2 != 0)
        cout << "Wynik: " << num1 / num2;
    else
        cout << "Dzielenie przez zero!";
    break;
default:
    cout << "Nieprawidlowy operator!";
    break;
}

return 0;
}
