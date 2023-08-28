#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int i, tamanho;

    printf("Digite uma palavra: ");
    gets(palavra);

    tamanho = strlen(palavra);

    while(i < tamanho){
        i++;
    }

    printf("A palavra %s tem %d letras", palavra, i);
}