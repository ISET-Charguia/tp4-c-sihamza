#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n1,j,k,min1,min2,n2,i,t1[20],t2[20],t3[40] ;
  do
    {
       printf(" Donner N le nombre d'entier N1/N2 : ");
       scanf("%d/%d",&n1,&n2);
    }
    while ((n1>20) || ( n2>20)) ;
    for (i=0 ; i<n1 ; i++ )
    {
        printf(" Donner une valeur de t1[%d] : ",i+1) ;
        scanf("%d",&t1[i]);
    }
     for (i=0 ; i<n2 ; i++ )
    {
        printf(" Donner une valeur de t2[%d] : ",i+1) ;
        scanf("%d",&t2[i]);
    }
    j = 0 ;
    i = 0 ;
    k = 0 ;
    do
     {if (t1[i]<t2[j])
    {
         t3[k] = t1[i] ;
         i++ ;
         k++ ;
    }
    else
    {
         t3[k] = t2[j] ;
         j++ ;
         k++ ;
    }

     if (t2[j] < t1[i])
    {
         t3[k] = t2[j] ;
         j++ ;
         k++ ;
    }
    else
     {
         t3[k] = t1[i] ;
         i++ ;
         k++ ;
    }
     if (t2[j] == t1[i])
     {
        t3[k] = t2[j]  ;
        t3[k+1] = t1[i]  ;
        j++ ;
        i++ ;
        k+=2 ;
     }
    }
    while ( k < n1 + n2 ) ;

    for (i=0 ; i<n1+n2 ; i++ )
    {printf("t[%d] : %d ",i+1,t3[i]) ; }
}
