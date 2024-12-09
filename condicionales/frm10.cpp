#include <iostream>
#include <iomanip>
#include <algorithm> // Para std::sort
#include <vector>

using namespace std;

int main() {

    vector<double> notas(5);
    double nMayor, nMenor, suma = 0.0, promedio = 0.0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    nMayor = *max_element(notas.begin(), notas.end());
    nMenor = *min_element(notas.begin(), notas.end());

    for (double nota : notas) {
        if (nota != nMayor && nota != nMenor) {
            suma += nota;
        }
    }


    promedio = suma / 3.0; 

    cout << fixed << setprecision(2);
    cout << "Nota mayor eliminada: " << nMayor << endl;
    cout << "Nota menor eliminada: " << nMenor << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
