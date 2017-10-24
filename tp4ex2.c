#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,i,n,t[20],tn[20],tp[20] ;
    do
    {
        printf(" Donner N le nombre d'entier ");
        scanf("%d",&n);
    }
    while (n>20) ;
    x = 0 ;
    y = 0 ;
    for (i=0 ; i<n ; i++ )
    {
        printf(" Donner une valeur de t[%d] : ",i+1) ;
        scanf("%d",&t[i]);
         if (t[i]<0)
      {tn[x] = t[i] ;
          x++ ; }
          else
       {tp[y] = t[i] ;
          y++ ; }
    }

    for (i=0 ; i<x ; i++ )
    {
     printf(" TN : %d",tn[i]) ;
    }
    printf("\n") ;
     for (i=0 ; i<y ; i++ )
    {
     printf(" TP : %d",tp[i]) ;
    }
}
