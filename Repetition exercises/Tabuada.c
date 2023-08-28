#include <stdio.h>
#include <string.h>

int main(){
    int numero, multi;
    int i;
    char enter[1];

    for(numero = 1; numero <= 10; numero++){
        printf("Tabuada do %d\n\n", numero);

        for(i = 1; i <= 10; i++){
            multi = numero * i;
            printf("%d x %d = %d\n", numero, i, multi);
        }

        printf("aperte <enter> para continuar");
        gets(enter);
    }

}