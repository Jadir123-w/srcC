#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    string dias[] = {"lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo"};
    string dia;

    cout << "Ingrese un número (1-7): ";
    cin >> numero;

    if (numero >= 1 && numero <= 7) {
        dia = dias[numero - 1];
    } else {
        dia = "Error";
    }

    cout << "Día: " << dia << endl;

    return 0;
}
