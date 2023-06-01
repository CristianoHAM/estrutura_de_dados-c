#include <stdio.h>
#include <stdlib.h>


struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto *p;
    int Distatancia;

    p = malloc(sizeof(struct Ponto));

    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    printf("Digite o valor do Ponto x: ");
    scanf("%d", &p->x);
    printf("Digite o valor do Ponto y: ");
    scanf("%d", &p->y);
    
    Distatancia = p->x - p->y;
    
    printf("\n\n A distancia entre o ponto x e y é: %d",Distatancia);

    free(p);

    return 0;
}