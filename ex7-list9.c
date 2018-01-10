#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
void imprimir(int (*m)[N],int l, int c);
int main()
{
	int A[N][N],i,j;

	srand(time(NULL));
	for(i=0;i<N;i++)
	   for(j=0;j<N;j++)
		A[i][j]=i*10 + rand()%10;
	
	printf("matriz gerada\n");
	imprimir(A,N,N);
	return(0);
}
void imprimir(int (*m)[N],int l, int c)
{
	int i,j;
	for(i=0;i<l;i++)
	{
	   for(j=0;j<c;j++)
		printf(" %d",m[i][j]);
	   printf("\n");
	}
}
