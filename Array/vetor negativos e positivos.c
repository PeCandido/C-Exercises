#include <stdio.h>
#include <string.h>

int main(){
    int vetor[8] = {8, -2, 3, 1, -5, 7, -14, 10};
    int tamanho = sizeof(vetor);
    int positivos[8] = {0};
    int negativos[8] = {0};
    int i;
    int p = 0;
    int n = 0;

    for(i = 0; i < tamanho; i++){
        if(vetor[i] > -1){
            positivos[p] = vetor[i];
            p++;
        } 
        else {
            negativos[n] = vetor[i];
            n++;
        }
    }
}