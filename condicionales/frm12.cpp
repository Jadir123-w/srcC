#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int numero;
    string dias[] = {"Lunes", "Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    cout<< "Numero :"; cin>>numero;
    if(numero >= 1  && numero <= 7)
        cout<< "Dia :"<<dias[numero-1]<<endl;
    else cout<<"Error"<<endl;
    
    return 0;
}