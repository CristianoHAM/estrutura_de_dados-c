#include <stdio.h>
#include <string.h>

#define TAM 50
#define QUA_AL 3

typedef struct{
 char nome[TAM];
 char matricula[TAM];
 float AV1, AV2, AV3;   
} Aluno;

typedef struct{
    char nome[TAM];
    char codigo[TAM];
    Aluno alunos[QUA_AL];
}Turma;

float calcularMedia(Aluno aluno){
    float menorNota = aluno.AV1;

    if(menorNota > aluno.AV2){
        menorNota = aluno.AV2;
    }
    if(menorNota > aluno.AV3){
        menorNota = aluno.AV3;
    }

    float media = (aluno.AV1 + aluno.AV2 + aluno.AV3 - menorNota ) /2.0;
    return media;
}

void imprimirSituacaoFinal(Turma turma){
    printf("\n\t Situacao final dos alunos da turma: %s - %s\n",turma.nome,turma.codigo);

    for (int i = 0; i < QUA_AL; i++)
    {
        Aluno aluno = turma.alunos[i];
        float media = calcularMedia(aluno);
        printf("\n O aluno %s portador da maricula %s atingiu a nota media de %.1f e foi %s.", aluno.nome, aluno.matricula, media, media >= 6.0 ? "APROVADO":"REPROVADO");

    }
}
int main() {
    Turma turma;
    
    strcpy(turma.nome, "THE BEST STRUCT IN C");
    printf("Digite o codigo da turma '%s': ",turma.nome);
    scanf("%s", turma.codigo);
    
    strcpy(turma.alunos[0].nome, "Cristiano Henrique");
    strcpy(turma.alunos[0].matricula, "202008076481");
    turma.alunos[0].AV1 = 8.5;
    turma.alunos[0].AV2 = 9.0;
    turma.alunos[0].AV3 = 7.5;
    
    strcpy(turma.alunos[1].nome, "Maria Clara Pereir");
    strcpy(turma.alunos[1].matricula, "2020067890");
    turma.alunos[1].AV1 = 9.5;
    turma.alunos[1].AV2 = 3.2;
    turma.alunos[1].AV3 = 10.0;
    
    strcpy(turma.alunos[2].nome, "Pedro Araujo Vaz");
    strcpy(turma.alunos[2].matricula, "2020054321");
    turma.alunos[2].AV1 = 4.2;
    turma.alunos[2].AV2 = 6.5;
    turma.alunos[2].AV3 = 4.0;

   imprimirSituacaoFinal(turma);

    return 0;
}