#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

struct Livro{
    char titulo[TAM];
    char autor[TAM];
    int anoPublicacao;
    char editora[TAM];
};

int main()
{
    struct Livro *p;

    p = malloc(sizeof(struct Livro));

    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    
    printf("Digite o titulo do livro: ");
    scanf("%s", p->titulo);
    printf("Digite o autor do livro: ");
    scanf("%s", p->autor);
    printf("Digite o ano de Publicacao do livro: ");
    scanf("%d", &p->anoPublicacao);
    printf("Digite a editora do livro: ");
    scanf("%s", p->editora);

    printf("\n O titulo do livro é: %s", p->titulo);
    printf("\n O autor do livro é: %s", p->autor);
    printf("\n O ano de Publicacao do livro é: %d", p->anoPublicacao);
    printf("\n A edtora do livro é: %s\n\n", p->editora);

    return 0;
}
