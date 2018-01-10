#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define TAM 60
#define Max 3

void bolha(char (*vet)[TAM],int fim);
main()
{
    char nomes[Max][TAM];  
    int i;

    for(i=0;i<Max;i++) //lendo o vetor de nomes
    {
	 printf("digite um nome\n");
	 gets(nomes[i]);
    }
    
    printf("conferir nomes\n");
    for(i=0;i<Max;i++)
       printf("%s\n",nomes[i]);

    bolha(nomes,Max); 

    printf("vetor ordenado\n");
    for(i=0;i<Max;i++)
       printf("%s\n",nomes[i]);
    printf("\n");

}
void bolha(char (*vet)[TAM],int fim)
{
	int trocou=1,i;
	char aux[TAM];
	do{
		trocou=0;
		for(i=0;i<fim-1;i++)
		{
			if(strcmp(vet[i],vet[i+1])>0)
			{
				strcpy(aux,vet[i]); //trocando com as funcoes de copia
				strcpy(vet[i],vet[i+1]);
				strcpy(vet[i+1],aux);
				trocou=1;
			}
		}
		fim=fim-1;
	}while(trocou);
}
