#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Digite o tamanho das linhas e colunas da matriz: ");
    scanf("%d%*c", &n);

    int matriz[n][n];
    int i, j;
    int flag = 0;

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("Digite valor da linha %d da coluna %d: ", i, j);
            scanf("%d%*c", &matriz[i][j]);
            }
        }
    
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            if(i == j && matriz[i][j] != 1){
                flag = 0;
            } else if(i !=j && matriz[i][j] != 0){
                flag = 0;
            } else {
                flag = 1;
            }
    }
}
  if(flag)
        printf("A matriz identidade\n");
    else
        printf("A matriz nao identidade\n");
}
