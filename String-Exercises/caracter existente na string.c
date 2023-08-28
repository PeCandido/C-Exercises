#include <stdio.h>
#include <string.h>

int main(){
    char string[10][50];
    int i, j;
    char letra;
    int flag = 0;

    printf("Digite uma letra: ");
    scanf("%c%*c", &letra);

    for(i=0; i<10; i++){
        printf("Digite o nome: ");
        gets(string[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<strlen(string[i]); j++){
            if(string[i][j] == letra){
                puts(string[i]);
                flag = 1;
                break;
            } 
        } 
    }
    if(!flag)
        printf("Letra nao encontrada");
    
}
