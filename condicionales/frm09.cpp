#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int codigo, cantidad;
    double precioU = 0.0, porDesc = 0.0, impCom, desc, TPagar;

    cout << "Ingrese el codigo del producto (101-104): ";
    cin >> codigo;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    if (codigo == 101) {
        precioU = 17.0;
    } else if (codigo == 102) {
        precioU = 25.0;
    } else if (codigo == 103) {
        precioU = 16.0;
    } else if (codigo == 104) {
        precioU = 27.0;
    } else {
        cout << "Codigo no reconocido." << endl;
        return 0; 
    }

    impCom = precioU * cantidad;

    if (cantidad >= 1 && cantidad <= 10) {
        porDesc = 5.0;
    } else if (cantidad >= 11 && cantidad <= 20) {
        porDesc = 8.0;
    } else if (cantidad >= 21 && cantidad <= 30) {
        porDesc = 10.0;
    } else if (cantidad >= 31) {
        porDesc = 13.0;
    }

    desc = impCom * porDesc / 100.0;
    TPagar = impCom - desc;

    cout << fixed << setprecision(2);
    cout << "Importe de compra: S/. " << impCom << endl;
    cout << "Descuento aplicado: S/. " << desc << endl;
    cout << "Total a pagar: S/. " << TPagar << endl;

    return 0;
}
