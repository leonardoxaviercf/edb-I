#include <iostream>
#include <Windows.h>
using namespace std;

int multiplicacaoIterativa(int a) {
    int acumulador = 1;

    while (a > 1) {
        acumulador *= a;
        a -= 1;                   
    }

    return acumulador;
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;

    cout << "A multiplicação de 1 até " << a << " é " << multiplicacaoIterativa(a) << endl; 

    return 0;
}