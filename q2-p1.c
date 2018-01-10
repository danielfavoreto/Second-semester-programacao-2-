#include<stdio.h>
int main()
{
	int i,n;
	float soma,termo;
	
	printf("digite um numero inteiro > 0:\n");
	scanf("%d",&n);
	soma=0;
	for(i=1;i<=n;i++)
	{
		termo=(float)i/(n-(i-1));//transformar um dos operandos da divisao em real temporariamente pois na divisao de 2 inteiros as casas decimais sao descartadas
		soma+=termo;
	}
	printf("soma = %f\n",soma);

	return(0);
}
