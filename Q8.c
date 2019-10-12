#include <stdio.h>

int main()
{
   int i, num = 0;

   printf("Digite a tabuada do numero desejado");
   scanf("%d",&num);

   for (i = 1; i <= 10; ++i)
   {
       printf("%d X %d = %d\n",num, i, num * i);
   }

   return 0;
}
