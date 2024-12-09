#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    string signo;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0) {
        signo = "Positivo";
    } else if (numero < 0) {
        signo = "Negativo";
    } else {
        signo = "Cero";
    }

    cout << "Signo: " << signo << endl;

    return 0;
}
