#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {4, 2, 7, 5, 1};
    int tamanho = numeros.size();

    int atual;
    int proximo;

    for (int i = 0; i < tamanho; i++) {
        atual = numeros[i];
        proximo = numeros[i+1];

        if (numeros[i] > numeros[i+1]) {
            numeros[i] = proximo;
            numeros[i+1] = atual;
        }
    }

    for (int numero : numeros) {
        cout << numero << endl;
    }
}