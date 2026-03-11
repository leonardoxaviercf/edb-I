#include <iostream>
#include <windows.h>
using namespace std;

int buscaSequencial (int vetor[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i; //  Retorna o indice da chave encontrada
        } // else if (vetor[i] > chave) {return -1} // Esse caso para a busca se estiver ordenada e vetor[i] for maior que a chave
    }
    return -1; // Não encontrou a chave
}


int buscaBinaria (int vetor[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == chave) {
            return meio; // Encontrou a chave
        } else if (vetor[meio] < chave) {
            inicio = meio + 1; // Descarta metade da esquerda
        } else {
            fim = meio - 1; //  Descarda metade da direita
        }
    }   
    return -1; 
}

int main () {
    // O que é um algoritmo de busca
    // Uma sequência de instruções para buscar algo
    // Devemos encontrar mecanismos que otimizem essa busca, sempre pensando onde e como procurar
    // Tipos de busca - Busca sequencial e Busca binária
    
    // Busca sequencial - Percorre todos os elementos de uma estrutura um por um até encontrar o valore desejado
    // Principais caracterisitca - Qualquer estrutura linear; Baixa complexidade; Fácil de implementar; Lenta em grandes volumes
    // OBS: Não exige que os dados estejam ordenados; Pouco eficiente em grandes conjuntos de dados
    // Exemplo: Buscar uma chave dentro de uma gaveta cheia de objetos
    // Como funciona - 1. Posição inicial(posição 1); 2. Compara(retorna se for sucesso); 3. Avança; 4. Repete; 5. Fim(pode ser sucesso ou insucesso)    
    // Melhor caso - a chave é o menor elemento
    // Pior caso - a chave é maior que todos os elementos

    int c[] = {14, 16, 15, 13, 18, 17};
    int n = 6;

    int posicao = buscaSequencial(c, n, 17);

    if (posicao == -1) {
        cout << "Item não está no vetor." << endl;
    } else {
        cout << "O item foi encontrado na posição " << posicao << endl;
    }

    int c2[] = {5, 8, 12, 17, 23, 30, 41};
    int n2 = 7;
    
    int posicao2 = buscaBinaria(c2, n2, 41);

    if (posicao2 == -1) {
        cout << "Item não está no vetor." << endl;
    } else {
        cout << "O item foi encontrado na posição " << posicao2 << endl;
    }
    
    // Busca binária - Muito eficiente para dados ordenados, dividindo o conjunto de dados ao meio, descartando metade onde o elemento buscado não pode estar
    // Exige que os dados estejam ordenado
    // Exemplo - Buscar uma palavra no dicionário
    // Como funciona - 1. Posição inicial(no meio do conjunto); 2. Compara(em qual dos lados não pode estar e elimina); 3. Avança; 4. Repete; 5. Fim(pode ser sucesso ou insucesso)
    // Funcionamento - Inicio = 0; Fim = Tamanho -1; Meio = (Inicio + Fim) / 2
    // Lembrar que ao for fazendo as múltiplas atribuições para o Início, em determinado momento se o valor não estiver no vetor, o Início vai ficar maior que o Fim. Esse será nosso ponto de parada
    // Fazer em casa (atividades incompletas)

    // int c2[] = {5, 7, 8, 10, 12, 15};
    // int n2 = 6;
}
