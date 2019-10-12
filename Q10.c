#include <stdio.h>
int main()
{
   int valor[10], dentro = 0, fora = 0;

   for(int i = 0; i < 10; i++)
   {
   cout << "Digite um numero inteiro para o valor[" << i << "]:" << endl;
   cin >> valor[i];
   }

   for(int i = 0; i < 10;i++)
   {
    if ( valor[i] >= 10 && valor[i] <= 50 )
     dentro++;
    else
     fora++;
   }
   cout << "numero de valores dentro do intervalo: " << dentro << endl;
   cout << "numero de valores fora do intervalo: " << fora << endl;

   system("PAUSE");
   return 0;
}
