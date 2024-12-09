#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nMatematica, nFisica;
    double proMatematica, proFisica, proTotal, promedio;
    bool rReloj;

    cout << "Ingrese la nota de Matemáticas: ";
    cin >> nMatematica;

    cout << "Ingrese la nota de Física: ";
    cin >> nFisica;

    proMatematica = (nMatematica > 17) ? 3.0 : nMatematica;
    proFisica = (nFisica > 15) ? 2.0 : (nFisica * 0.5);
    proTotal = proMatematica + proFisica;
    promedio = (nMatematica + nFisica) / 2;
    rReloj = (promedio > 16);

    cout << fixed << setprecision(2);
    cout << "Propina: S/ " << proTotal << endl;
    cout << (rReloj ? "De regalo: Recibirá un reloj." : "De regalo: No recibirá nada.") << endl;

    return 0;
}
