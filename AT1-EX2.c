#include <stdio.h>
#define TAM 50
struct Carro{
    char marca[TAM];
    char modelo[TAM];
    int ano;
    float preco;
};
int main()
{
    struct Carro carros[3];
    
    for (int i = 0; i < 3; i++) {
        printf("\n\tCarro %d\n", i + 1);
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", carros[i].marca);
        printf("Digite o modelo da carro %d: ", i + 1);
        scanf("%s", carros[i].modelo);
        printf("Digite o ano da carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);
        printf("Digite o preco da carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    for(int i = 0; i < 3; i++){
        printf("\tCarro %d", i + 1);
        printf("\n A marca do carro %d é: %s", i + 1, carros[i].marca);
        printf("\n A modelo do carro %d é: %s", i + 1, carros[i].modelo);
        printf("\n A ano do carro %d é: %d", i + 1, carros[i].ano);
        printf("\n A preco do carro %d é: %.2f\n\n", i + 1, carros[i].preco);
       
    }

    return 0;
}
