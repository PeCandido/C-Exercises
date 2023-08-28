#include <stdio.h>
#include <string.h>

int main(){
    int idade, peso, idade_total, peso_total;
    float media, altura, altura_total; 
    int i, j;
    int idade_menor_18 = 0;
    int peso_maior_80 = 0;
    float idade_media = 0;
    float altura_media = 0;
    float porcentagem_peso = 0;

    for (i = 0; i < 5; i++){
        printf("Time %d\n", i+1);
        idade_media = 0;
        altura_media = 0;
        idade_menor_18 = 0;

        for(j = 0; j < 11; j++){
            printf("Jogador %d\n", j+1);
            printf("Digite a idade do jogador: ");
            scanf("%d%*c", &idade);
            printf("Digite a altura do jogador: ");
            scanf("%f%*c", &altura);
            printf("Digite a peso do jogador: ");
            scanf("%d%*c", &peso);

            idade_total = idade_total + idade;
            altura_total = altura_total + altura;
            if(idade < 18){
                idade_menor_18++;
            }

            if(peso > 80){
                peso_maior_80++;
            }
        }

        idade_media = idade_total / 11;
        altura_media = altura_total / 55;
        float divisao = (float) peso_maior_80/55;
        float resultado =  divisao * 100;

        printf("Jogadores menores de 18: %d\n", idade_menor_18);
        printf("Idade media do time: %.2f\n", idade_media);
        printf("Altura media do time: %.2f\n", altura_media);
        
    }
    printf("Porcetagem de pessoas acima de 80kg: %.2f", resultado)
}