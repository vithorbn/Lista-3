#include <stdio.h>
int main()
{
   int n = 0;
   float media = 0.0;
   for(int i = 14; i < 73; i++)// 14 e 73 = (entre 13 e 73)
   {
    if(i%2 == 0)
    {
     media += i;
     n++;
    }
   }
   media = media/n;
   cout << "media: " << (float)media << endl;
   system("PAUSE");
   return 0;
}
