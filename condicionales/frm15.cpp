#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sueldoBase = 250.0;
    double montoVendido, comision, sueldoBruto, descuento, sueldoNeto;
    int categoria;

    cout << "Ingrese el monto vendido: ";
    cin >> montoVendido;
    cout << "Ingrese la categoría (1-4): ";
    cin >> categoria;

    double porcentajeComision;
    if (montoVendido <= 5000) {
        porcentajeComision = 0.05;
    } else if (montoVendido <= 10000) {
        porcentajeComision = 0.08; 
    } else if (montoVendido <= 20000) {
        porcentajeComision = 0.10; 
    } else {
        porcentajeComision = 0.15; 
    }

    comision = montoVendido * porcentajeComision;

    sueldoBruto = sueldoBase + comision;

    if (sueldoBruto > 3500) {
        descuento = sueldoBruto * 0.15;
    } else {
        descuento = sueldoBruto * 0.08;
    }

    sueldoNeto = sueldoBruto - descuento;

    cout << fixed;
    cout << "Comisión: S/ " << comision << endl;
    cout << "Sueldo Bruto: S/ " << sueldoBruto << endl;
    cout << "Descuento: S/ " << descuento << endl;
    cout << "Sueldo Neto: S/ " << sueldoNeto << endl;

    return 0;
}
