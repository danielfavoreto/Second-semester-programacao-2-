#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	FILE *arq;
	char nomearq[15];
	
	printf("digite nome do arquivo de entrada\n");gets(nomearq);
	arq=fopen(nomearq,"r");
	if (arq==NULL){
		printf("arquivo inexistente\n");
		exit(0);
	}
	
	do{
		fscanf(arq,"%d%d%d\n",&a,&b,&c);
		if (a<b+c && b<a+c && c<a+b)
		{
			if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
			  printf(" %d %d %d formam um triangulo retangulo\n",a,b,c); 
			else printf(" %d %d %d formam um triangulo\n",a,b,c); 
		}	
		else printf(" %d %d %d nao formam triangulo\n",a,b,c);
	}while(!feof(arq));
	fclose(arq);
	system("pause");
	return(0);
}
