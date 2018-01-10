#include<stdio.h>
#include<string.h>
#define N 200
int main()
{
    char nomes[N][60],novo[6];
    int idades[N],id,i,k,num_soc;

    printf("quantos socios existem?\n");
    scanf("%d",&num_soc);
    getchar(); //funcao que captura um caracter
    printf("digitar os socios com idade em ordem crescente\n");
    for(i=0;i<num_soc;i++)
    {
	printf("digite nome: ");gets(nomes[i]);
	printf("digite idade: ");scanf("%d",&idades[i]);
	getchar();//funcao que captura um caracter
    }
    printf("digite nome do socio novo: ");gets(novo);
    printf("digite idade do socio novo: ");scanf("%d",&id);
    i=0;//iniciar a busca
    while(idades[i] < id && i < num_soc) 
	i++;
	
    if(i==num_soc)
    {
	idades[i]=id;
	strcpy(nomes[i],novo);
    }
    else
	{
	    for(k=num_soc;k>i;k--)
	    {
		idades[k]=idades[k-1];
		strcpy(nomes[k],nomes[k-1]);
	    }
	    idades[i]=id;
	    strcpy(nomes[i],novo);
	}
   num_soc++;
   printf("lista nova dos socios\n");
   for(i=0;i<num_soc;i++)
	printf("%s - %d\n",nomes[i],idades[i]);
   return(0);
}

