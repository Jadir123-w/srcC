#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int numero, sumaCifras = 0;

    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numero;

    int c1 = numero / 1000; numero %= 1000;
    int c2 = numero / 100; numero %= 100;
    int c3 = numero / 10; numero %= 10;
    int c4 = numero % 10;

    sumaCifras = c1 + c2 + c3 + c4;

    cout << "La suma de las cifras es: " << sumaCifras << endl;

    return 0;
}
