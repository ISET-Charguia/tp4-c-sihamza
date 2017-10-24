#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,n,a,t[50] ;
   printf(" Donner un entier N : ");
   scanf("%d",&n);
   x = 0 ;
   a = n ;
   do
   {
      t[x] = n % 2 ;
      n = n / 2 ;
      x++ ;
   }
   while (n != 0) ;
   if (x>50)
    printf( " ERROR : numbre tres grand ");
   else
   {
   printf(" %d B10 = ",a) ;
   for (i=x ; i>=0 ; i-- )
    {
     printf("%d",t[i]) ;
    }
   printf(" B2");
   }
}
