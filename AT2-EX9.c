#include <stdio.h>

void ordena_vetor(int *vetor, int tamanho) {
    int i, j;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int meu_vetor[] = {3, 5, 2, 8, 1};
    int tamanho = sizeof(meu_vetor) / sizeof(meu_vetor[0]);
    ordena_vetor(meu_vetor, tamanho);
    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meu_vetor[i]);
    }
    printf("\n");
    return 0;
}