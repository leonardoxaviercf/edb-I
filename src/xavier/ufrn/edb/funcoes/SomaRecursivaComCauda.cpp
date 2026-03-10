#include <iostream>
#include <Windows.h>
using namespace std;

int somaCauda(int a, int b) {
    if (b == 0) {
        return a;
    }

    return somaCauda(a + 1, b - 1);
}

int main () {
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;
    int b = 3;

    cout << "A soma de " << a << " e " << b << " é " << somaCauda(a, b) << endl; 

    return 0;
}