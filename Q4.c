int main()
{
   int valor,i;
   printf("Insira um valor para verificar os seus divisores: \n");
   scanf("%d", &valor);
   for (i = 1; i < valor+1; i++)
   {
       if (valor%i==0)
       {
           printf("Os divisoes sao %d \n", i);
       }
   }
   return 0;
}
