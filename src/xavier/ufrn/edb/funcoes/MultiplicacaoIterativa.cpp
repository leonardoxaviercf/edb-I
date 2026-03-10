#include <iostream>
#include <Windows.h>
using namespace std;

int multiplicacaoIterativa (int a, int b) {
    int acumulador = 0;
    while (b > 0) {
        acumulador += a;
        b -= 1;
    }

    return acumulador;
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 10;
    int b = 4;

    cout << "A multiplicação de " << a << " e " << b << " é " << multiplicacaoIterativa(a, b) << endl; 

    return 0;
}