#include <stdio.h>
#include <string.h>

int main(){
    int fatorial = 1;
    int numero;
    int i;

    printf("Digite um numero: ");
    scanf("%d%*c", &numero);

    for(i=1; i <= numero; i++){
        fatorial = fatorial * i;
    }
    printf("%d! = %d", numero, fatorial);
}