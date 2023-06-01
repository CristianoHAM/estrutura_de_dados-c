#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No* ptr;
};

void exibeLista( struct No* no)
{
    while (no != NULL)
    {
        printf("\n %d", no->valor);
        no = no->ptr;
    }
}



int main()
{
    
}