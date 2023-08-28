#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], maiuscula[100], minuscula[100];
    int i, tamanho;

    printf("Digite o nome completo: ");
    gets(nome);

    tamanho = strlen(nome);

    for(i = 0; i < tamanho; i++){
        maiuscula[i] = toupper(nome[i]);
        minuscula[i] = tolower(nome[i]);
    }

    maiuscula[tamanho] = '\0';
    minuscula[tamanho] = '\0';

    printf("%s\n", nome);
    printf("%s\n", maiuscula);
    printf("%s\n", minuscula);

}