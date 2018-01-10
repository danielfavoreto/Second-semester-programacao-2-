#include<stdio.h>
#define N1 10
#define N2 5
void ler(int* vet,int fim);
int main()
{
	int A[N1],B[N2],i,j,cont;
	
	printf("digite as %d componentes inteiras do vetor A: \n",N1);
	ler(A,N1);
	printf("digite as %d componentes inteiras do vetor B: \n",N2);
	ler(B,N2);
	cont=0; //contar ocorrencias de elementos de B em A
	for(i=0;i<N2;i++)
	    for(j=0;j<N1;j++) //procurar cada elemento de B em A
		if(B[i]==A[j]) cont++;

	if (cont == 0) 
	    printf("o vetor B nao esta contido em A\n");
	else if (cont >= N2) //considerar que existem elementos repetidos
	        printf("o vetor B esta totalmente contido em A\n");
	        else
		  printf("o vetor B esta parcialmente contido em A\n");
	
	return(0);
}
void ler(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    scanf("%d",&vet[i]); //ler um elemento de cada vez
}
