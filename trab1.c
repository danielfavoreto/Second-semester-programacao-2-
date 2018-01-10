#include<stdio.h>
#define N 5
int Ptos(int idade,int mat,int port);
int Desemp(int* P,int* idade,int* insc,int maior,int* im);

int main()
{
	int i,P[N],idade[N],insc[N],mat[N],port[N];
	int maior=-1,im,desempate=0,cont=0;

	for(i=0;i<N;i++)
	{
		printf("inscricao : ");scanf("%d",&insc[i]);
		printf("idade: ");scanf("%d",&idade[i]);
		printf("acertos de matematica: ");scanf("%d",&mat[i]);
		printf("acertos de portugues: ");scanf("%d",&port[i]);
		if (port[i] != 0) P[i]=Ptos(idade[i],mat[i],port[i]);
		    else {
				P[i]=0;
				printf("candidato %d desclassificado\n",insc[i]);
			 }
		if (P[i] > maior)//procurar o maior e guardar o indice da ocorrencia
		{ 
			maior=P[i];
			im=i;
		}
	}
	for(i=0;i<N;i++) //procurar se tem empate
	     if (P[i]== maior) cont++;
 
    if (cont == 1)
       	printf("\n\nsem empate: maior pontuacao = %d no candidato %d \n",maior,insc[im]);
   	else
	    {
            desempate=Desemp(P,idade,insc,maior,&im);//im passagem por referência pois altera o valor dentro da função
	    	printf("maior pontuacao = %d no candidato %d \n",maior,insc[im]);
            if (desempate == 1) 
               printf("regra de desempate: mais novo com idade %d\n",idade[im]);
               else if(desempate == 2)
                       printf("regra de desempate: se inscrever primeiro com inscricao %d\n",insc[i]);
         }
    system("pause");
	return(0);
}

int Ptos(int idade,int mat,int port)
{
    return(idade+mat+2*port);
}

int Desemp(int* P,int* idade,int* insc,int maior,int* im)
{
    int i,desempate;
	for(i=0;i<N;i++)
		if (P[i]==maior)
		{
			if (idade[i]<idade[*im])
				{
                     *im=i;
                     desempate=1;
                }
				else if (idade[*im]==idade[i])
				        if (insc[i]<=insc[*im])
						{
                           *im=i;
                           desempate=2;
                        }	
       }
    return(desempate);
}
