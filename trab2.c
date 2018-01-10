#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char nome[20];
	int idade, prox;
	} tpcrianca;
FILE *arq;
int main()
{
	int i,n1,n2,n3,total,e1,e2;
	tpcrianca *alunos1,*alunos2,*alunos3;//declarando os ponteiros para vetores de struct
	char **escola1,**escola2;//declarando ponteiros para vetores de strings (bidimensional)
	char nomearq[15];

	printf("digite o nome do arquivo de entrada: ");//poderiam fazer arq=fopen("bairro1.txt","r");
	gets(nomearq);
	arq=fopen(nomearq,"r");
	fscanf(arq,"%d\n",&n1);
	alunos1=malloc(n1*sizeof(tpcrianca));
	for(i=0;i<n1;i++)
	{
		fgets(alunos1[i].nome,20,arq);
		fscanf(arq,"%d%d\n",&alunos1[i].idade,&alunos1[i].prox);
	}
	fclose(arq);

	printf("digite o nome do arquivo de entrada: "); //idem para bairro2
	gets(nomearq);
	arq=fopen(nomearq,"r");
	fscanf(arq,"%d\n",&n2);
	alunos2=malloc(n2*sizeof(tpcrianca));
	for(i=0;i<n2;i++)
	{
		fgets(alunos2[i].nome,20,arq);
		fscanf(arq,"%d%d\n",&alunos2[i].idade,&alunos2[i].prox);
	}
	fclose(arq);
	
	printf("digite o nome do arquivo de entrada: "); //idem para bairro3
	gets(nomearq);
	arq=fopen(nomearq,"r");
	fscanf(arq,"%d\n",&n3);
	alunos3=malloc(n3*sizeof(tpcrianca));
	for(i=0;i<n1;i++)
	{
		fgets(alunos3[i].nome,20,arq);
		fscanf(arq,"%d%d\n",&alunos3[i].idade,&alunos3[i].prox);
	}
	fclose(arq);

 	total=n1+n2+n3;
	printf("total=%d\n",total);
	escola1= malloc(total*sizeof(char *));//alocar total de criancas pois nao se sabe quantas serao alocadas em cada escola
	escola2= malloc(total*sizeof(char *));

	e1=e2=0; //inicializando cada indice das escolas
	for(i=0;i<total;i++)
	{
	  escola1[i]= malloc(20*sizeof(char));
	  escola2[i]= malloc(20*sizeof(char));
	}
	
	for(i=0;i<n1;i++)
	   if (alunos1[i].idade >= 7 && alunos1[i].idade <= 9)
		if (alunos1[i].prox == 1) strcpy(escola1[e1++],alunos1[i].nome);
		else strcpy(escola2[e2++],alunos1[i].nome);	

	for(i=0;i<n2;i++)
	   if (alunos2[i].idade >= 7 && alunos2[i].idade <= 9)
		if (alunos2[i].prox == 1) strcpy(escola1[e1++],alunos2[i].nome);
		else strcpy(escola2[e2++],alunos2[i].nome);

	for(i=0;i<n3;i++)
	   if (alunos3[i].idade >= 7 && alunos3[i].idade <= 9)
		if (alunos3[i].prox == 1) strcpy(escola1[e1++],alunos3[i].nome);
		else strcpy(escola2[e2++],alunos3[i].nome);
	printf(" -------------------\n");
        printf("|alunos da escola 1|\n");	
	printf(" -------------------\n");
 	for(i=0;i<e1;i++)
	   puts(escola1[i]);
	printf(" -------------------\n");
        printf("|alunos da escola 2|\n");	
	printf(" -------------------\n");
	for(i=0;i<e2;i++)
	   puts(escola2[i]);

	free(alunos1);
	free(alunos2);
	free(alunos3);
	free(escola1);
	free(escola2);
	return(0);
}


