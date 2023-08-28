#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    int matriz[3][3];
    int flag = 0;

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("Digite valor da linha %d da coluna %d: ", i, j);
            scanf("%d%*c", &matriz[i][j]);
            }
        }
    

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            if(matriz[i][j] != matriz[j][i]){
                flag = 1;
            }
        }
    }

    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    if(flag)
        printf("A matriz assimetrica\n");
    else
        printf("A matriz simetrica\n");
}   