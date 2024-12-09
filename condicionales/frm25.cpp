#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sueldoBruto, bonificacion, sueldoNeto;
    int hijos;

    cout << "Ingrese el sueldo bruto (S/.): ";
    cin >> sueldoBruto;

    cout << "Ingrese el número de hijos: ";
    cin >> hijos;

    if (hijos > 1) {
        bonificacion = sueldoBruto * 0.125 + (hijos * 40);
    } else {
        bonificacion = sueldoBruto * 10;
    }

    sueldoNeto = sueldoBruto + bonificacion;

    cout << "Bonificación: S/. " << bonificacion << endl;
    cout << "Sueldo Neto: S/. " << sueldoNeto << endl;

    return 0;
}
