#include<stdio.h>
#include<math.h>
#define N 10
float distancia(float x,float y);//retorno float para o programa principal
int main()
{
	int i,eixox,eixoy;
	float dist,x,y,maior,xM,yM;
	
	eixox=eixoy=maior=0;//inicializacao das variaveis
	for(i=1;i<=N;i++)
	{
		printf("digite as coordenadas do ponto no plano-xy:\n");
		scanf("%f%f",&x,&y);
		dist=distancia(x,y);//passagem de parâmetros por valor
		if (dist > maior)
		{
			maior=dist;
			xM=x;
			yM=y;//guardar as coordenadas do ponto
		}
		if (x==0) eixox++;
		if (y==0) eixoy++;
	}
	printf("maior distancia ate a origem = %f com ponto (%f,%f)\n",maior,xM,yM);
	printf("quantidade de pontos no eixo x = %d\n",eixox);
	printf("quantidade de pontos no eixo y = %d\n",eixoy);
	return(0);
}
float distancia(float x,float y)
{
	float d;
	d=sqrt(x*x+y*y);//usa-se o valor do parametro
	return(d);
}
