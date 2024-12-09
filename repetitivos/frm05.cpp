#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= 12; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}
