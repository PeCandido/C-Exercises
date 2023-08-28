#include <stdio.h>
#include <string.h>

int main(){
    int vetor_a[10] = {8, 3, 1, 7, 10, 12, 77, 100, 33, 54};
    int vetor_b[10] = {-2, -5, -14, 5, 6, 12, 17, 20, 66, 16};
    int vetor_c[20] = {0};
    int tamanho = sizeof(vetor_c);
    int i;
    int a = 0;
    int b = 0;

    for(i = 0; i < tamanho; i++){
        if(i % 2 == 0){
            vetor_c[i] = vetor_a[a];
            a++;
        }
        else {
            vetor_c[i] = vetor_b[b];
            b++;
        }
    }
}