#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1[10]={10,20,5,8,102,56,84,59,23,24} , t2[10]={52,65,87,15,2,9,36,12,46,97} , i  , t3[10] , x ;
    for (i=0 ; i<=9 ; i++ )
    {
     t3[i] = t1[i] ;
     t1[i] = t2[i] ;
     t2[i] = t3[i] ;
     printf(" t1[%d] = %d ; t2[%d] = %d ; \n",i+1,t1[i],i+1,t2[i]) ;
    }
    // methode 2
    printf("Methode 2 : \n") ;
     for (i=0 ; i<=9 ; i++ )
    {
         x = t1[i] ;
     t1[i] = t2[i] ;
     t2[i] = x ;
     printf(" t1[%d] = %d ; t2[%d] = %d ; \n",i+1,t1[i],i+1,t2[i]) ;
    }



}
