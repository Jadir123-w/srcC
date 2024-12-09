#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numero;

    int temp = numero;
    while (temp > 0) {
        invertido = invertido * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Numero invertido: " << invertido << endl;

    return 0;
}
