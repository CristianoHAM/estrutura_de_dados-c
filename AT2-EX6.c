#include <stdio.h>

int fatorial(int n) {
    int i;
    int resultado = 1;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int x = 5;
    int resultado = fatorial(x);
    printf("O fatorial de %d é %d\n", x, resultado);
    return 0;
}