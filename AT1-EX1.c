#include <stdio.h>
#include <string.h>
struct Pessoas{
 char nome[50];
 int idade;
 float altura;
};

int main()
{
    struct Pessoas PessoaA, PessoaB;
    
    strcpy(PessoaA.nome, "cris");
    PessoaA.idade = 20;
    PessoaA.altura = 1.76;
    
    strcpy(PessoaA.nome, "cris");
    PessoaB.idade = 30;
    PessoaB.altura = 1.92;
    
    printf("\t PessoaA \nnome: %s \nidade: %d \naltura: %f.2 \n", PessoaA.nome, PessoaA.idade, PessoaA.altura);
    printf("\t PessoaB \nnome: %s \nidade: %d \naltura: %f.2 \n", PessoaB.nome, PessoaA.idade, PessoaA.altura);

    return 0;
}