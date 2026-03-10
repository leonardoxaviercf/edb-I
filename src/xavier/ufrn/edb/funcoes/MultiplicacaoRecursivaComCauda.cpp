#include <iostream>
#include <Windows.h>
using namespace std;

int multiplicacaoCauda(int a, int b, int acumulador = 0) {
    if (b == 0 || a == 0) {
        return acumulador;
    }

    return multiplicacaoCauda(a, b - 1 , acumulador + a);
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 10;
    int b = 2;

    cout << "A multiplicação de " << a << " e " << b << " é " << multiplicacaoCauda(a, b) << endl; 

    return 0;
}