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

    double pVarones = (static_cast<double>(varones) / total) * 100;
    double pMujeres = (static_cast<double>(mujeres) / total) * 100;

    pVarones = static_cast<int>(pVarones * 100) / 100.0;
    pMujeres = static_cast<int>(pMujeres * 100) / 100.0;

    cout << "Porcentaje de varones: " << pVarones << "%" << endl;
    cout << "Porcentaje de mujeres: " << pMujeres << "%" << endl;

    return 0;
}
