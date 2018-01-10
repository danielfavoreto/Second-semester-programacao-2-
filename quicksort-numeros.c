#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void troca(int *x, int *y);
int particao(int li, int ls,int *vet);
void quicksort(int li, int ls, int *vet);

main()
{
    int fim;
    int vet[100];  
    int i, li,ls;
    printf("digite o numero de elementos do vetor: \n");
    scanf("%d",&fim);

    printf("vetor:");
    for(i=0;i<fim;i++)
       scanf("%d",&vet[i]); 
 
    quicksort(0,fim-1,vet); 

    for(i=0;i<fim;i++)
       printf("% d",vet[i]);
    printf("\n");
    system("pause");
}

void troca(int *x, int *y)
{ 
     int aux;
     aux = *x;
     *x = *y;
     *y = aux;
}

int particao(int li, int ls,int *vet)
{ 
      int pivo;
      int i,p,k;
      pivo=vet[li];
      i=li+1;p=ls;
      while(i<p)
      {
         while(vet[i] <= pivo && i<p) i++;
         while(vet[p] > pivo) p--;
         if(i<p)
           troca(&vet[i],&vet[p]);
      }
      if(vet[li] > vet[p])
      {
         vet[li]=vet[p];
         vet[p]=pivo;
      }
      return(p);
}

void quicksort(int li, int ls, int *vet)
{
    int j;
    if(li<ls)
    {    
	j=particao(li,ls,vet);
        quicksort(li,j-1,vet);
        quicksort(j+1,ls,vet);
    }
}
