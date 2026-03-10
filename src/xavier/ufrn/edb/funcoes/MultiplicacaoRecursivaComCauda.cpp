#include <iostream>
#include <Windows.h>
using namespace std;

int multiplicacaoCauda(int a, int acumulador = 1) {
    if (a <= 1) {
        return acumulador;
    } 
    return multiplicacaoCauda(a - 1, acumulador * a);
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    cout << "A multiplicação de 1 até " << a << " é " << multiplicacaoCauda(a) << endl; 

    return 0;
}