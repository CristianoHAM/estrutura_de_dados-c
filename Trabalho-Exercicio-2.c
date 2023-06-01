#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 da Torre %c para a Torre %c\n", origem, destino);
        return;
    }
    hanoi(n-1, origem, auxiliar, destino);
    printf("Mover disco %d da Torre %c para a Torre %c\n", n, origem, destino);
    hanoi(n-1, auxiliar, destino, origem);
}

int main() {
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    printf("Passos para resolver a Torre de Hanoi com %d discos:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
