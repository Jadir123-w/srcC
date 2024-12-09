#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double aporJuan, aporRosa, aporDanielSoles;
    const double tipoCambio = 3.00;

    cout << "Ingrese el aporte de Juan (USD): ";
    cin >> aporJuan;

    cout << "Ingrese el aporte de Rosa (USD): ";
    cin >> aporRosa;

    cout << "Ingrese el aporte de Daniel (Soles): ";
    cin >> aporDanielSoles;

    double aporteDanielUSD = aporDanielSoles / tipoCambio;
    double totalCapitalUSD = aporJuan + aporRosa + aporteDanielUSD;

    double porcentajeJuan = (aporJuan / totalCapitalUSD) * 100;
    double porcentajeRosa = (aporRosa / totalCapitalUSD) * 100;
    double porcentajeDaniel = (aporteDanielUSD / totalCapitalUSD) * 100;

    cout << fixed << setprecision(2);
    cout << "\nCapital total (USD): " << totalCapitalUSD << endl;
    cout << "Porcentaje de Juan: " << porcentajeJuan << " %" << endl;
    cout << "Porcentaje de Rosa: " << porcentajeRosa << " %" << endl;
    cout << "Porcentaje de Daniel: " << porcentajeDaniel << " %" << endl;

    return 0;
}
