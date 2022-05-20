#include<stdio.h>
#include<math.h>

const int M=50;

int saisie()
{ int n ;
    printf("donner la taille du tableau\n");
    scanf("%d",&n);
    return n ;
}
 void remplir (int t[], int n)
{
    int i ;

    for(i=0;i<n;i++)
       {
        printf("tapez t[%d] :\n",i);
        scanf("%d",&t[i]);
       }
}
void afficher (int t[],int n)
{ int i;
     printf(" le tableau est :\t");
     for(i=0;i<n;i++)
     printf( "%d|",t[i]);

}
void distance (int t[],int n,int tab_dis[])
{ int i;
    for(i=0;i<n-1;i++)
    {
        tab_dis[i]= abs ( t[i]-t[i+1]) ;
    }
    printf("\nle tableau des distances:\t");
    for(i=0;i<n-1;i++) printf("%d|", tab_dis[i]);
}

int  emplacement (int tab_dis[],int n, int x )
{
    int i,dis, min= abs (tab_dis[0]- x),ind;

    for(i=1;i<n;i++)
    {
        if ( abs (tab_dis[i]- x) <= min  )
            {min = abs(tab_dis[i]-x) ;ind=i; dis= tab_dis[i];}
    }

    printf("La distance adequate dans laquelle on peut inserer le %d est %d \n",x,dis);
    return ind;
}

void sort(int t[],int n)

{ int i=0,aux,s=0 ;
    while ( s == 0)
        {
         s=1;
         for(i=0;i<n-1;i++)
         {
           if ( t[i] > t[i+1] )
            {
              aux = t[i];
              t[i]= t[i+1];
              t[i+1] = aux ;
              s=0;
            }
         }
        }
}

void insert_Nv (int t[],int n, int ind,int x)
{ int i,aux;
  for(i=n;i>ind;i--) t[i+1] = t[i];
   t[ind+1]=x;

}

int main ()
{

 int T[M],D[M],X,N,INDC;
 N=saisie();
 remplir(T,N);
 afficher(T,N);
 sort(T,N);
 printf("\n*************************************  APRES LE TRI  *******************************************\n");
 afficher(T,N);
 distance(T,N,D);
 printf("\t Donner l'element a inserer : \t");
 scanf("%d",&X);
 INDC = emplacement (D,N-1,X);
 printf(" Ce %d va etre inserer alors entre les deux elements :\t  |%d|%d| ",X,T[INDC],T[INDC+1]);
 insert_Nv(T,N,INDC,X);
 afficher(T,N+1);

return 0 ;
}
