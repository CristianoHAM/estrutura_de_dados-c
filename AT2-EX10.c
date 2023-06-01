#include <stdio.h>

int conta_digitos(int n) {
    int contador = 0;
    while (n != 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

int main() {
    int x = 12345;
    int resultado = conta_digitos(x);
    printf("O número %d tem %d dígitos\n", x, resultado);
    return 0;
}