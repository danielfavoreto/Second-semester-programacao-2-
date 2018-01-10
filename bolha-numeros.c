#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void troca(int *x, int *y);
void bolha(int *vet,int fim);
main()
{
    int vet[100];  
    int i,fim;
    printf("digite o numero de elementos do vetor: \n");
    scanf("%d",&fim);
    printf("vetor: ");

    for(i=0;i<fim;i++)
       scanf("%d",&vet[i]);  

    bolha(vet,fim); 

    printf("vetor ordenado\n");
    for(i=0;i<fim;i++)
       printf("% d",vet[i]);
    printf("\n");
//    system("pause");
}
void troca(int *x, int *y)
{ 
     int aux;
     aux = *x;
     *x = *y;
     *y = aux;
}

void bolha(int *vet,int fim)
{
	int trocou=1,i;
	do{
		trocou=0;
		for(i=0;i<fim-1;i++)
		{
			if(vet[i] > vet[i+1])
			{
				troca(&vet[i],&vet[i+1]);
				trocou=1;
			}
		}
		fim=fim-1;
	}while(trocou);
}
