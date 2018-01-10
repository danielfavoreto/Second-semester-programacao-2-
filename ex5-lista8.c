#include<stdio.h>
#define N 10
void ler(int* vet,int fim);
int main()
{
	int i,vetor[N],vezes,valor;

	printf("digite as componentes inteiras do vetor ordenado crescente\n");
	ler(vetor,N);
	i=0;

	while(i < N)
	{
	   valor=vetor[i];
	   vezes=1; 
	   while(i < N && vetor[i+1]==valor) //i < N para garantir que nao testará vetor[N]
	      {
		vezes++;
		i++;
	      }
	   printf("%d aparece %d vezes\n",valor,vezes);
	   i++;
	}
	return(0);
}


void ler(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    scanf("%d",&vet[i]); //ler um elemento de cada vez
}
