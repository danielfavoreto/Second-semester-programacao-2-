#include<stdio.h>
#include<math.h>
#define N 20 //diminuir N para ver executando com menos pontos
int main()
{
	float A[N],S=0;
        int i;

	printf("digite as %d componentes reais do vetor: ",N);
        for(i=0;i<N;i++)
	    scanf("%f",&A[i]);
	for(i=0;i<(N/2);i++)
	   {
	   	printf("verificar termo %.2f %.2f = %.2f\n",A[i],A[N-1-i],A[i]-A[N-1-i]);
	   	S+=(A[i]-A[N-1-i])*(A[i]-A[N-1-i]);
	   }

	printf("S = %.2f\n",S);
	return(0);
}

