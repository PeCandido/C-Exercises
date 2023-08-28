#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], sobrenome[30];
    char nomecompleto[60] = "";
    int i = 0;
    int letras = 0;

    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o sobrenome: ");
    gets(sobrenome);

    strcat(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);

    int tamanho = strlen(nomecompleto);
    int ultima_letra = tamanho - 1;

    for(i=0; i<tamanho; i++){
        if(nomecompleto[i] != ' '){
            letras++;
        }
    }

    puts(nomecompleto);
    printf("Numero de caracteres: %d\n", letras);
    printf("Primeira letra: %c\n", nomecompleto[0]);
    printf("Ultima letra: %c\n", nomecompleto[ultima_letra]);
}