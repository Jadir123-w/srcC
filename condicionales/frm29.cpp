#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    double cuota, totalPagar;
    int dPago;

    cout << "Cuota Mensual: ";
    cin >> cuota;

    cout << "Día de Pago: ";
    cin >> dPago;

    if (dPago >= 1 && dPago <= 10) {
        double descuento = max(5.0, cuota * 0.02);
        totalPagar = cuota - descuento;
    } else if (dPago >= 11 && dPago <= 20) {
        totalPagar = cuota;
    } else if (dPago >= 21 && dPago <= 31) {
        double recargo = max(10.0, cuota * 0.03);
        totalPagar = cuota + recargo;
    } else {
        cout << "Dia de pago invalido" << endl;
        return 0;
    }

    cout << "Total Pagar: $ " << fixed << setprecision(2) << totalPagar << endl;

    return 0;
}
