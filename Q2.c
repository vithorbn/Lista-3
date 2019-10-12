#include<stdio.h>
#include<stdlib.h>

int main()

{

      int i, c=0;

      for (i=1;i<=100;i++)

      {

          if (i%7==0)

          {

                     printf("%d eh multiplo de 7\n", i);

                     c++;

          }

      }

      printf("Existem %d multiplos de 7 no intervalo de 0 a 100\n", c);

      system("pause");

}
