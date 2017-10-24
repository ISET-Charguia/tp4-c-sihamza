#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,z,min,f,x,i,j,n,y,p,t[20] ;
    do
    {
       printf(" Donner N le nombre d'entier ");
       scanf("%d",&n);
    }
    while (n>20) ;
    for (i=0 ; i<n ; i++ )
    {
        printf(" Donner une valeur de t[%d] : ",i+1) ;
        scanf("%d",&t[i]);
    }
    do
    {
    printf("                                  Menu                                 \n") ;
    printf("                                                                       \n") ;
    printf(" 1 - Déterminer le minimum de ses éléments                             \n") ;
    printf(" 2 - Remplacer toutes les occurrences d’un entier x                    \n") ;
    printf("     dans le tableau par un entier y.                                  \n") ;
    printf(" 3 - Insérer un entier x à une position p donnée du tableau            \n") ;
    printf(" 4 - Supprimer toutes les occurrences d’un entier x                    \n") ;
    printf(" 5 - Quitter                                                           \n") ;
    scanf("%d",&x) ;
    switch (x)
    {case 1 :
     min = t[0] ;
      for ( i=1 ; i<n ; i++)
      { if (t[i]<min)
         min = t[i]; }
       printf(" le minimum de ses éléments = %d \n",min) ;
       printf("\n") ;  ; break ;
    case 2 :
     printf(" Donner une valeur de x/y : ") ;
        scanf("%d/%d",&a,&y);
    for ( i=0 ; i<n ; i++)
      { if (t[i] == a )
         t[i] = y; }
    for (i=0 ; i<n ; i++ )
    {printf("t[%d] : %d ",i,t[i]) ;
    printf("\n") ; } ; break ;
    case 3 :
    printf(" Donner une la pastion et la valeur p/y : \n") ;
    scanf("%d/%d",&p,&y);
    for ( i=n-1 ; i>=p ; i--)
      { t[i+1] = t[i]; }
      t[y] = p ;
    for (i=0 ; i<n+1 ; i++ )
    {printf("t[%d] : %d ",i,t[i]) ;
    printf("\n") ; } ;break ;
    case 4 :
    printf(" Donner une valeur x : \n") ;
    scanf("%d",&a);
    z = 0 ;
    f = 0 ;
    do
    {   if (t[z] == a)
        {for ( i = z+1 ; i<n ; i++ )
        {
            t[i-1] = t[i] ;
        }  z= 0 ; f ++ ;}

        z++ ;
    }
    while ( z<n )  ;
    for (i=0 ; i<n-f ; i++ )
    {printf("t[%d] : %d ",i,t[i]) ; }
     printf("\n") ; break ; }}
    while (x!=5) ;

}
