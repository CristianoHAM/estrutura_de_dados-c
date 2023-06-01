#include <stdio.h>

void imprime_vetor(int *vetor, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int meu_vetor[] = {3, 5, 2, 8, 1};
    int tamanho = sizeof(meu_vetor) / sizeof(meu_vetor[0]);
    printf("Valores do vetor: ");
    imprime_vetor(meu_vetor, tamanho);
    return 0;
}