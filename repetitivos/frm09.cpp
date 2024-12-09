#include <iostream>
using namespace std;

int main() {
    int altura;

    cout << "Ingrese la altura (n >= 4): ";
    cin >> altura;

    if (altura >= 4) {
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < 2 * altura; j++) {
                cout << "*";
            }
            cout << endl; 
        }
    }

    return 0;
}
