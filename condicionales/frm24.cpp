#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double ventas, sueldo;

    cout << "Ingrese el monto total de ventas (S/.): ";
    cin >> ventas;

    sueldo = ventas * 0.10;

    if (ventas > 5000) {
        double exceso = ventas - 5000;
        int bonos = exceso / 500;
        sueldo += bonos * 25;
    }

    cout << fixed << setprecision(2);
    cout << "Sueldo: S/. " << sueldo << endl;

    return 0;
}
