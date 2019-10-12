#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
 int x;
 for(x=1; x<100;x++)
 if (x % 4 == 0)
 printf("%d\n",x);
 /* Pode ser feito assim tambem
 x=1;
 while (x <100)
 {
 if (x % 4 == 0)
 printf("%d\n",x);
 x=x+1;
 }
 */
 system("pause");
 return 0;
}
