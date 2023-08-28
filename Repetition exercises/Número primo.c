#include <stdio.h>
#include <string.h>

// USANDO WHILE
int main(){
    int numero;
    int primo = 0;
    int i = 1;
    float resto;

    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    while(i <= numero){
        resto = numero % i;
        if(resto == 0){
            primo++;
        }

        if(primo >= 3){
            primo = 0;
            break;
        }
        i++;
    }
    printf("%d\n", primo);
    switch(primo){
        case 0:
            printf("numero nao primo");
            break;

        case 2:
            printf("numero primo");
            break;
    }
}

// USANDO FOR
int main(){
    int numero;
    int primo = 0;
    int i;
    float resto;

    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    for(i=1; i <= numero; i++){
        resto = numero % i;
        if(resto == 0){
            primo++;
        }
        
        if(primo >= 3){
            primo = 0;
            break;
        }
    }

    switch(primo){
        case 0:
            printf("numero nao primo");
            break;

        case 2:
            printf("numero primo");
            break;
    }
}