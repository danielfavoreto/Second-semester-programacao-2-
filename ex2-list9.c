#include<stdio.h>
#include<string.h>
#define TAM 60
#define Max 3
int main()
{
	int t,maior,menor,i;
	char nomes[Max][TAM],nome_maior[Max],nome_menor[Max];

	maior=0;menor=TAM;
	for(i=0;i<Max;i++)
	{
		printf("digite um nome\n");
		gets(nomes[i]);
		t=strlen(nomes[i]);
		if (t > maior) 
		{
			maior = t;
			strcpy(nome_maior,nomes[i]);
		}
		   else if (t < menor) 
			{
				menor = t;
				strcpy(nome_menor,nomes[i]);
			}

	}
	printf("maior nome = %s com %d caracters e menor nome = %s com %d caracters\n",nome_maior,maior,nome_menor,menor);
	return(0);
}
