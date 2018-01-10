#include<stdio.h>
#define N 10
void ler(int* vet,int fim);
int main()
{
	int i,vetor[N],razao;

	printf("digite as componentes inteiras do vetor\n");
	ler(vetor,N);
	razao=vetor[0]-vetor[1]; //descobrir a razao
	printf("razao=%d\n",razao);
	i=1;
	while(vetor[i]-vetor[i+1]==razao && i<(N-1)) 
		i++;
	printf("par conferir: valor de i depois do while=%d\n",i);
	if (i==N-1) printf("vetor forma uma PA\n");
	   else printf("vetor nao forma uma PA\n");
	return(0);
}


void ler(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    scanf("%d",&vet[i]); //ler um elemento de cada vez
}
