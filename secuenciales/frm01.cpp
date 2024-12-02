#include <iostream>
using namespace std;

int main() {
    int varones, mujeres;
    cout << "Ingrese la cantidad de varones: ";
    cin >> varones;
    cout << "Ingrese la cantidad de mujeres: ";
    cin >> mujeres;

    int total = varones + mujeres;
    if (total == 0) {
        cout << "El total de personas no puede ser 0." << endl;
        return 1;
    }

    double pVarones = varones * 100.0 / total;
    double pMujeres = mujeres * 100.0 / total;

    cout << "Porcentaje de varones: " << pVarones << "%" << endl;
    cout << "Porcentaje de mujeres: " << pMujeres << "%" << endl;

    return 0;
}
