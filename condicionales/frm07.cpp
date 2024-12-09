#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2, num3, intermedio;

    cout << "Digite el primer número: ";
    cin >> num1;

    cout << "Digite el segundo número: ";
    cin >> num2;

    cout << "Digite el tercer número: ";
    cin >> num3;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        intermedio = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        intermedio = num2;
    } else {
        intermedio = num3;
    }

    cout << "El número intermedio es: " << intermedio << endl;

    return 0;
}
