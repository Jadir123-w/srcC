#include <iostream>
#include <string>

using namespace std;

int main() {
    string numero;
    char cifraM, cifraMe;

    cout << "Digite un numero de 4 cifras: ";
    cin >> numero;

    cifraM = numero[0];
    cifraMe = numero[0];
    for (int i = 1; i < 4; i++) {
        if (numero[i] > cifraM) {
            cifraM = numero[i];
        }
        if (numero[i] < cifraMe) {
            cifraMe = numero[i];
        }
    }
    
    cout << "El mayor numero posible con las cifras es: ";
    cout << cifraM << cifraMe << endl;

    return 0;
}
