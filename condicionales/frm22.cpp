#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int uniA, uniB;
    double precioA = 25.0, precioB = 30.0;
    double descA, descB, impBa, impBb, desctA, desctB, impBr, descuento, total;

    cout << "Ingrese las unidades del Producto A: ";
    cin >> uniA;

    cout << "Ingrese las unidades del Producto B: ";
    cin >> uniB;

    descA = (uniA > 50) ? 0.15 : 0.0;
    descB = (uniB > 60) ? 0.10 : 0.0;

    impBa = uniA * precioA;
    impBb = uniB * precioB;
    desctA = impBa * descA;
    desctB = impBb * descB;
    impBr = impBa + impBb;
    descuento = desctA + desctB;
    total = impBr - descuento;

    cout << fixed << setprecision(2);
    cout << "El importe bruto es de S/ " << impBr << endl;
    cout << "El descuento es de S/ " << descuento << endl;
    cout << "El total a pagar es de S/ " << total << endl;

    return 0;
}
