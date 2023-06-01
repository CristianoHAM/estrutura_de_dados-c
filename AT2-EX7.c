#include <stdio.h>

void soma_vetores(int *vetor1, int *vetor2, int *vetor3, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }
}

int main() {
    int vetor1[] = {3, 5, 2};
    int vetor2[] = {1, 4, 6};
    int tamanho = sizeof(vetor1) / sizeof(vetor1[0]);
    int vetor3[tamanho];
    soma_vetores(vetor1, vetor2, vetor3, tamanho);
    printf("Vetor resultante: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");
    return 0;
}