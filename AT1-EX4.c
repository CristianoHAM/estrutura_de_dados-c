#include <stdio.h>
#include <stdlib.h>


struct Retangulo {
    float altura;
    float largura;
};

int main() {
    struct Retangulo *p;
    float areaRetangulo;

    p = malloc(sizeof(struct Retangulo));

    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &p->altura);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &p->largura);
    
    areaRetangulo = p->altura * p->largura;
    
    printf("\n\n a area do Retangulo e: %.2f",areaRetangulo);

    free(p);

    return 0;
}