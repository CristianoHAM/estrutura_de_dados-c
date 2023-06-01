#include <stdio.h>
#include <string.h>

void print_strIvertida(char *valor){
    
    for (int i = strlen(valor); i >= 0; i--)
    {
        printf("%c",valor[i]);
    }
    printf("\n");

}

int main( ) {
    char var[]= "cristiano";
    print_strIvertida(var);


}