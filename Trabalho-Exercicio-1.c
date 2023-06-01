#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista encadeada
typedef struct Node {
    int chave;
    struct Node* proximo;
} Node;

// Função para criar um novo nó da lista encadeada
Node* criarNo(int chave) {
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->chave = chave;
    novo->proximo = NULL;
    return novo;
}

// Função para imprimir a lista encadeada
void imprimirLista(Node* cabeca) {
    printf("Lista resultante: [");
    Node* atual = cabeca;
    while (atual != NULL) {
        printf("%d", atual->chave);
        if (atual->proximo != NULL) {
            printf(", ");
        }
        atual = atual->proximo;
    }
    printf("]\n");
}

// Função para remover os nós com chaves pares da lista encadeada
Node* removerPares(Node* cabeca) {
    Node* atual = cabeca;
    Node* anterior = NULL;
    while (atual != NULL) {
        if (atual->chave % 2 == 0) {
            if (anterior == NULL) { // Remoção do primeiro nó da lista
                cabeca = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            Node* temp = atual;
            atual = atual->proximo;
            free(temp);
        } else {
            anterior = atual;
            atual = atual->proximo;
        }
    }
    return cabeca;
}

int main() {
    // Criação da lista encadeada de exemplo
    Node* no0 = criarNo(0);
    Node* no1 = criarNo(1);
    Node* no2 = criarNo(2);
    Node* no3 = criarNo(3);
    Node* no4 = criarNo(4);
    Node* no5 = criarNo(5);
    Node* no6 = criarNo(6);
    Node* no7 = criarNo(7);
    Node* no8 = criarNo(8);
    Node* no9 = criarNo(9);
    no0->proximo = no1;
    no1->proximo = no2;
    no2->proximo = no3;
    no3->proximo = no4;
    no4->proximo = no5;
    no5->proximo = no6;
    no6->proximo = no7;
    no7->proximo = no8;
    no8->proximo = no9;

    printf("Lista original: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]\n");

    // Remoção dos nós com chaves pares da lista encadeada
    Node* novaCabeca = removerPares(no0);

    // Impressão da lista encadeada resultante
    imprimirLista(novaCabeca);

    // Liberação da memória alocada para os nós da lista encadeada
    Node* atual = novaCabeca;
    while (atual != NULL) {
        Node* temp = atual;
        atual = atual->proximo;
        free(temp);
    }

    return 0;
}