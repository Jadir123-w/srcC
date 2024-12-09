#include <iostream>
using namespace std;

int main() {
    int numero, inicio, fin;

    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "Ingrese el inicio de la tabla: ";
    cin >> inicio;
    cout << "Ingrese el fin de la tabla: ";
    cin >> fin;

    cout << "Tabla de multiplicar del " << numero << " desde " << inicio << " hasta " << fin << ":\n";
    for (int i = inicio; i <= fin; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
