#include <stdio.h>
#define MAX 100

int lista[MAX];

void inserir(int valor)
{
    for (int i = 0; i < MAX; i++)
    {
        if (lista[i] == 0)
        {
            lista[i] = valor;
            break;
        }
       
    }
}

int buscar(int valor)
{
    int index = -1;
    for (int i = 0; i < MAX; i++)
    {
        if (lista[i] == valor)
        {
            index = i;
        }
    }
    return index;
}

void remover(int valor)
{
    int index = buscar(valor);
    for (int i = index; i < MAX; i++)
    {
        int prox = i + 1;
        lista[i] = lista[prox];
    }
}
void exibir()
{
    printf("\n\t Exibindo");
    for (int i = 0; i < MAX; i++)
    {
        if (lista[i] != 0)
        {
            printf("\n o index %d tem o valor %d.", i, lista[i]);
        }
    }
}

int main()
{
    exibir();
    inserir(22);
    exibir();
    inserir(22);
    inserir(33);
    inserir(44);
    inserir(55);
    exibir();
    int reslBusca = buscar(44);
    printf("\n\t Buscando \no valor encontrado esta no indice %d", reslBusca);
    printf("\n\tremovendo");
    remover(44);
    exibir();
}