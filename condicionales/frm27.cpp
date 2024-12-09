#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double mVendido, sBasico = 600, comision, sBruto, descuento, sNeto;
    int polosObs;

    cout << "Ingrese el monto total vendido (S/.): ";
    cin >> mVendido;

    comision = mVendido * 0.15;
    sBruto = sBasico + comision;

    descuento = (sBruto > 1800) ? sBruto * 0.10 : sBruto * 0.05;
    sNeto = sBruto - descuento;

    polosObs = (mVendido > 1000) ? 3 : 1;

    cout << "Sueldo Bruto S/. " << sBruto << endl;
    cout << "Descuento S/. " << descuento << endl;
    cout << "Sueldo Neto S/. " << sNeto << endl;
    cout << "Polos Regalados: " << polosObs << endl;

    return 0;
}
