#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "El numero debe ser de 4 digitos." << endl;
        return 1;
    }

    int temp = numero;
    while (temp > 0) {
        invertido = invertido * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Numero invertido: " << invertido << endl;

    return 0;
}
