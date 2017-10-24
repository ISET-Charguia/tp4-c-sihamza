#include <stdio.h>
#include <stdlib.h>

int main()
{
     int t[20][20], l , i , j ,c , s ;

     do
    {
       printf(" Donner les dimension de matrice L/C : ");
       scanf("%d/%d",&l,&c);
    }
    while (( l > 20 ) || ( c > 20 )) ;
    for (i=0 ; i<l ; i++ )
    {  for (j=0 ; j<c ; j++ )
       {
        printf(" Donner une valeur de t[%d][%d] : ",i+1, j+1) ;
        scanf("%d",&t[i][j]); }
    }
    s = 0 ;
     for (i=0 ; i<l ; i++ )
    {  for (j=0 ; j<c ; j++ )
       { s = s + t[i][j] ;}}
    printf(" la somme de matrice = %d et la moyenne = %d ",s,s/(l*c)) ;
}


