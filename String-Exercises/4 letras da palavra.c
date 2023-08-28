#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    gets(palavra);

    for(i=0; i < 4; i++){
        printf("%c", palavra[i]);
    }  
}