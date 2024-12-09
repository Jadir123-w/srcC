#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void convertirAMayusculas(string &str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}

void convertirAMinusculas(string &str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    convertirAMayusculas(texto);
    cout << "Texto en mayúsculas: " << texto << endl;

    convertirAMinusculas(texto);
    cout << "Texto en minúsculas: " << texto << endl;

    return 0;
}
