#include <iostream>
#include <stdio.h>
using namespace std;

int multiplicar(int multiplicando, int multiplicador);

int main() {
    int multiplicando, multiplicador;

    cout<<"Multipicando : "; cin>>multiplicando;
    cout<<"Multipicador : "; cin>>multiplicador;
    /* for(int n = multiplicando; multiplicador-- > 1; multiplicando += n); */

    cout<<"Producto :"<<multiplicar(multiplicando,multiplicador);
    return 0;
}

int multiplicar(int multiplicando, int multiplicador){
    if (multiplicador == 1) return multiplicando;
    multiplicando + multiplicar(multiplicando, multiplicador - 1);
}