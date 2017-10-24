#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i,n,t[20] ;
    do
    {
        printf(" Donner N le nombre d'entier ");
        scanf("%d",&n);
    }
    while (n>10) ;
    s = 0 ;
    for (i=0 ; i<n ; i++ )
    {
        printf(" Donner une valeur de t[%d] : ",i+1) ;
        scanf("%d",&t[i]);
        s = s + t[i] ;
    }
    printf(" la moyenne : %d",s/n) ;
}
