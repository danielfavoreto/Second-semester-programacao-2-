#include<stdio.h>
#include<string.h>
#define TAM 61
int main()
{
	int t,i,cont=1;//contar a ultima palavra
	char frase[TAM];
	
	printf("digite uma frase de ate %d caracteres\n",TAM-1);
	gets(frase);
	t=strlen(frase);
	printf("num de caracteres da frase = %d\n",t);
	for(i=0;frase[i]!='\0';i++)
		if(frase[i]==' ') cont++;
	printf("num de palavras = %d\n",cont);
	return(0);
}
