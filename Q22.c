#include <stdio.h>
#include <string.h>

int main(){
    char dado[40], cop[40];
    int i, tamanho, j;
    printf("Desenhar um gr%cfico na vertical: ",160);
    printf("insira os dados: ");

    fgets(dado, 40, stdin);
    tamanho = strlen(dado);
    for(i=0; i<tamanho; i++){
        if(dado[i]>=48 && dado[i]<=57){
            int k = dado[i] - 48;
            for(j=0; j<k; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}
