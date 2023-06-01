#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x = 5;
    bool resultado = eh_primo(x);
    printf("%d é primo? %s\n", x, resultado ? "Sim" : "Não");
    return 0;
}