#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese el número de empleado (4 dígitos): ";
    cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "Estado Civil: Código inválido" << endl;
        cout << "Edad: Número inválido" << endl;
        cout << "Sexo: Número inválido" << endl;
        return 0;
    }

    int estCivilCodigo = numero / 1000;
    int edad = (numero / 10) % 100;
    int sexoCodigo = numero % 10;

    string estadoCivil;
    switch (estCivilCodigo) {
        case 1: estadoCivil = "Soltero"; break;
        case 2: estadoCivil = "Casado"; break;
        case 3: estadoCivil = "Divorciado"; break;
        case 4: estadoCivil = "Viudo"; break;
        default: estadoCivil = "Código inválido"; break;
    }

    string sexo;
    if (sexoCodigo == 1) {
        sexo = "Masculino";
    } else if (sexoCodigo == 2) {
        sexo = "Femenino";
    } else {
        sexo = "Código no válido";
    }

    cout << "Estado Civil: " << estadoCivil << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;

    return 0;
}
