#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, j, palindromo = 1;

    printf("Digite uma Palavra: ");
    gets(palavra);

    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }
}