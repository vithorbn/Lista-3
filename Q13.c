#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int termo1 = 0, termo2 = 1, num, cont, soma;

    printf("Informe o limite da serie : ");
    scanf("%d", &num);

    for(cont=0;cont<=num;cont++){
       soma = termo1 + termo2;
       termo1 = termo2;
       termo2 = soma;

       printf("\nTermo %d  =  %d\n\n",cont, soma);
       }

       system("Pause");
}
