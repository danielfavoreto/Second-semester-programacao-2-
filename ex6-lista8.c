#include<stdio.h>
#define N 10
void ler(int* vet,int fim);
void imprimir(int* vet,int fim);
void construir(int* vet,int x,int* maiores,int* menoresouiguais,int fim,int* ind1,int* ind2);
int main()
{
	int i,ind1,ind2,vetor[N],maiores[N],menoresouiguais[N],x;

	printf("digite as componentes inteiras do vetor ordenado crescente\n");
	ler(vetor,N);
	printf("digite um valor inteiro qualquer: ");
	scanf("%d",&x);
	construir(vetor,x,maiores,menoresouiguais,N,&ind1,&ind2); //reparem que os indices sao passados por referencia
	printf("vetor dos valores maiores %d\n",x);
	imprimir(maiores,ind1);
	printf("vetor dos valores menores ou iguais a %d\n",x);
	imprimir(menoresouiguais,ind2);
	return(0);
}


void ler(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    scanf("%d",&vet[i]); //ler um elemento de cada vez
}
void imprimir(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    printf(" %d",vet[i]); //imprimir um elemento de cada vez com 2 casas decimais
	
	printf("\n"); //apenas para pular uma linha apos imprimir o vetor
}
void construir(int* vet,int x,int* maiores,int* menoresouiguais,int fim,int* ind1,int* ind2)
{
	int i;
	*ind1=*ind2=0; //inicializacao dos indices do vetores

	for(i=0;i<N;i++)
	   if (vet[i] > x)
	   {		
		maiores[*ind1]=vet[i];
	        *ind1=*ind1+1;
	   }
		else
	        {
		  menoresouiguais[*ind2]=vet[i];
	          *ind2=*ind2+1;
		}
}
