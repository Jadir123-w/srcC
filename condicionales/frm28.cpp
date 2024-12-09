#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int h24, h12;
    string periodo;

    cout << "Ingrese la Hora (24h): ";
    cin >> h24;

    if (h24 < 0 || h24 >= 24) {
        cout << "Hora invalida, ingrese un valor entre 0 y 23." << endl;
        return 0;
    }

    periodo = (h24 < 12) ? "AM" : "PM";
    h12 = (h24 % 12 == 0) ? 12 : h24 % 12;

    cout << "Hora en formato 12h: " << h12 << " " << periodo << endl;

    return 0;
}
