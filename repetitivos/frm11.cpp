#include <iostream>

using namespace std;

int main() {
    int contador = 0;

    for (int num = 100; num <= 999; num++) {
        int unidad = num % 10;
        int decena = (num / 10) % 10;
        int centena = num / 100;

        if (centena == unidad) {
            contador++;
        }
    }

    cout << "La cantidad de números capicúas de 3 cifras es: " << contador << endl;

    return 0;
}
