#include <stdio.h>
#include <string.h>

int main(){
    char string[10][50];
    int i, j;
    char aux[10][50];

    for(i=0; i<10; i++){
        printf("Digite o nome: ");
        gets(string[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<9; j++){
            if(strcmp(string[j], string[j+1]) > 0){
                strcpy(aux, string[j]);
                strcpy(string[j], string[j+1]);
                strcpy(string[j+1], aux);
            } 
        }
    }

    for(i=0; i<10; i++){
        puts(string[i]);
    }
}