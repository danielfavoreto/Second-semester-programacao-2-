#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
int main()
{
	int i,i1,i2,i3,n,idade,prox;
	char nome[40],esc1[N][40],esc2[N][40],esc3[N][40],nada[N][40];
	FILE *arq;
	
	arq=fopen("alunos.dat","r");
	if (arq==NULL){
		printf("arquivo inexistente\n");//verificar existencia do arquivo de entrada
		exit(0);
	}
	i1=i2=i3=n=0; //um indice para cada vetor a ser criado
	while(!feof(arq))	//pode ser com for
	{
		fgets(nome,40,arq);
		fscanf(arq,"%d%d\n",&idade,&prox);
		if (idade>=7 && idade<=9)
		{
			if(prox==1) strcpy(esc1[i1++],nome);
			if(prox==2) strcpy(esc2[i2++],nome);
			if(prox==3) strcpy(esc3[i3++],nome);
		}else strcpy(nada[n++],nome);
	}
	printf("alunos escola 1\n");
	for(i=0;i<i1;i++) puts(esc1[i]);
	printf("alunos escola 2\n");
	for(i=0;i<i2;i++) puts(esc2[i]);
	printf("alunos escola 3\n");
	for(i=0;i<i3;i++) puts(esc3[i]);
	printf("alunos idade irregular \n");
	for(i=0;i<n;i++) puts(nada[i]);
	
	fclose(arq);
	return(0);

}

