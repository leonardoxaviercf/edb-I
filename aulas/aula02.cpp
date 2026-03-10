#include <iostream>
#include <windows.h>
using namespace std;

int buscaSequencial (int vetor[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
}

int buscaBinaria (int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        // if vetor
    }
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

    cout << buscaSequencial(c, n, 18);
    
    // Busca binária - Muito eficiente para dados ordenados, dividindo o conjunto de dados ao meio, descartando metade onde o elemento buscado não pode estar
    // Exige que os dados estejam ordenado
    // Exemplo - Buscar uma palavra no dicionário
    // Como funciona - 1. Posição inicial(no meio do conjunto); 2. Compara(em qual dos lados não pode estar e elimina); 3. Avança; 4. Repete; 5. Fim(pode ser sucesso ou insucesso)
    // Funcionamento - Inicio = 0; Fim = Tamanho -1; Meio = (Inicio + Fim) / 2
    // Lembrar que ao for fazendo as múltiplas atribuições para o Início, em determinado momento se o valor não estiver no vetor, o Início vai ficar maior que o Fim. Esse será nosso ponto de parada
    // Fazer em casa (atividades incompletas)

    int c2[] = {5, 7, 8, 10, 12, 15};
    int n2 = 6;
}
