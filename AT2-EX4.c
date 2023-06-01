#include <stdio.h>

int multiplica(int a, int b) {
    return a * b;
}

int main() {
    int x = 5;
    int y = 7;
    int resultado = multiplica(x, y);
    printf("A multiplicação de %d e %d é %d\n", x, y, resultado);
    return 0;
}