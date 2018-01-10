#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void menor(int *vet,int fim);
main()
{
	int vet[100];  
	int i,fim;
	printf("digite o fim\n");
	scanf("%d",&fim);
	printf("vetor:");
	for(i=0;i<fim;i++)
		scanf("%d",&vet[i]);  
	menor(vet,fim); 
	for(i=0;i<fim;i++)
		printf(" %d",vet[i]);
	printf("\n");
	//    system("pause");
}

void menor(int *vet,int fim)
{
	int k=0,i,iaux,m,aux;
	
	while(k<fim)
	{
		m=vet[k];
		for(i=k;i<fim;i++)
		{
		    if (vet[i] < m)
		    {
		       m=vet[i];
		       iaux=i;
		    }
		}
		if (m < vet[k])
		{
		   aux=vet[k];
		   vet[k]=m;
		   vet[iaux]=aux;
		}
		k++;
	}
}

