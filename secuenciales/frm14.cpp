#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    vector<double> numeros(5);
    cout << "Ingrese cinco números:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros.rbegin(), numeros.rend());

    double promedio = (numeros[0] + numeros[1] + numeros[2]) / 3;

    cout << fixed << setprecision(2);
    cout << "El promedio de los tres números más altos es: " << promedio << endl;

    return 0;
}
