#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

int buscaSequencial (const vector<int> vetor,  int chave) {
    for (int i = 0; i < vetor.size(); i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main () {
    int tamanho = 1000000;
    int chave = tamanho - 1;
    
    vector<int> numeros(tamanho);

    for (int i = 0; i < tamanho; i++) {
        numeros[i] = i;
    }

    auto comeco = high_resolution_clock::now();

    int resultado = buscaSequencial(numeros, chave);

    auto fim = high_resolution_clock::now();

    duration<double, milli> duracao = fim - comeco;

    cout << "Encontrar a chave: " << resultado << endl;
    cout << "Duracao: " << duracao.count() << "ms" << endl;

    return 0;
}