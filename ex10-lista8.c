#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define LIM 50
void imprimir(int* vet,int fim);
int main()
{
	int i,j,k,num,vet_ale[N];

	srand(time(NULL));
	vet_ale[0]=1+rand()%LIM;printf("num= %d\n",vet_ale[0]);
	i=1;k=1;
	while(i < N)
	{
		num=1+rand()%LIM;printf("num= %d\n",num); //imprimir para verificar os numeros gerados
		k++;
              	for(j=0;num!=vet_ale[j]&&j<=i;j++); //NÃO esta errado o ponto e virgula aqui. Esse "for" apenas faz verificação dos numeros distintos
		if(j>i) vet_ale[i++]=num;
	}
	printf("quantidade de numeros aleatorios gerados foram %d\n",k);
	printf("vetor gerado\n");
	imprimir(vet_ale,i);
	return(0);
}
void imprimir(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    printf(" %d",vet[i]); //imprimir um elemento de cada vez com 2 casas decimais
	
	printf("\n"); //apenas para pular uma linha apos imprimir o vetor
}
