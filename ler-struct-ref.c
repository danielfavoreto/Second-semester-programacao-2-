#include<stdio.h>
#include<string.h>
#define N 3
typedef struct{
	char nome[50],email[30],matr[15];
	float coef;
	int idade;
              } tpaluno;
void ler(tpaluno *x);
int main()
{
	tpaluno aluno;
	int i,menor=100;//iniciar idade bem grande
	float mc=0,mid=0;
	char nome[50],email[30],matr[15];//posso ter variaveis com nomes dos campos

	for(i=0;i<N;i++)
	{	
	   printf("digite nome, email, matricula, coef e idade do aluno %d:\n",i+1);
	   ler(&aluno);
	   mc+=aluno.coef;
	   mid+=aluno.idade;
	   if(aluno.idade < menor)
	   {
	        menor=aluno.idade;
		strcpy(nome,aluno.nome);
	        strcpy(email,aluno.email);
	        strcpy(matr,aluno.matr);
	   }
	}
	mc=mc/N;
	mid=mid/N;
	printf("media dos coeficientes = %.2f\n",mc);
	printf("media das idades = %.2f\n",mid);
	printf("menor idade = %d\n",menor);
	printf("informacoes do aluno mais jovem\n");
	printf("nome: %s\n",nome);
	printf("email: %s\n",email);
	printf("matricula: %s\n",matr);
	return(0);
}
void ler(tpaluno *x)
{
	gets(x->nome);  // x carrega o endereco do string
	gets(x->email);
	gets(x->matr);
	scanf("%f",&(x->coef));   // enviar para a scanf o endereco do campo coef (float)
	scanf("%d",&(x->idade));  // enviar para a scanf o endereco do campo idade (int)
	getchar(); //limpar a tela do caracter enter
}

