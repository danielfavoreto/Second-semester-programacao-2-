#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ajuste(int* num);//retorno void (vazio) para o programa principal
int main()
{
	int i,num,soma,chute1,chute2;

	srand(time(NULL));
	printf("digite um numero para a soma de 5 valores entre 1 e 100:\n");
	scanf("%d",&chute1);
	printf("digite um numero para a soma de 5 valores entre 1 e 100:\n");
	scanf("%d",&chute1);

	soma=0;
	for(i=1;i<=5;i++)
	{
		num=1+rand()%100;
		if (num/10 == num%10) ajuste(&num);//passar a referecnia (o endereco) da variavel numero
		soma+=num;
	}
	printf("soma = %d\n",soma);

	if (abs(soma-chute1) < abs(soma-chute2)) printf("o primeiro jogador venceu\n");
		else printf("o segundo jogador venceu\n");

	return(0);
}
void ajuste(int* num)
{
	*num=*num + *num%10; // acessar o conteudo do endereco
}
