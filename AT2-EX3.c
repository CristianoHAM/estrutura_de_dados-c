#include <stdio.h>

int maior_valor(int *vetor, int tamanho) {
    int i;
    int maior = vetor[0];
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int meu_vetor[] = {3, 5, 2, 8, 1};
    int tamanho = sizeof(meu_vetor) / sizeof(meu_vetor[0]);
    int resultado = maior_valor(meu_vetor, tamanho);
    printf("O maior valor do vetor é %d\n", resultado);
    return 0;
}