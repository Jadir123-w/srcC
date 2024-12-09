#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos.\n";
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }

        cout << "Resultado: " << factorial << endl;
    }

    return 0;
}
