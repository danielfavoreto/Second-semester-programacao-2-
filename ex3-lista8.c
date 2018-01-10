#include<stdio.h>
#include<math.h>
#define N 20 //diminuir N para ver executando com menos pontos
void imprimir(float* vet,int fim);
int quad(float x,float y);
int main()
{
	float x,y,q1[N],q2[N],q3[N],q4[N],dist;
        int i,cont1,cont2,cont3,cont4; //contar quantidadede pontos em cada quadrante 
	
	cont1=cont2=cont3=cont4=0; //inicializacao dos contadores	

	for(i=1;i<N;i++) //numero de pontos do plano
	{
	    printf("digite x e y diferentes de zero: ");
	    scanf("%f%f",&x,&y);
	    switch(quad(x,y))  //construcao dos vetores por quadrante
	    {
		case 1: q1[cont1++]=sqrt(x*x+y*y);
			break;
		case 2: q2[cont2++]=sqrt(x*x+y*y);
			break;
		case 3: q3[cont3++]=sqrt(x*x+y*y);
			break;
		case 4: q4[cont4++]=sqrt(x*x+y*y);
			break;
		default: printf("a funcao quadrante falhou\n");
	    }
	}
	printf("para conferir numero de elementos de cada vetor: %d %d %d %d\n",cont1,cont2,cont3,cont4);
	//imprimir os vetores contruidos
	if (cont1 != 0) 
	{
	    printf("distancias dos pontos no quadrante 1\n");
	    imprimir(q1,cont1);
	}
	else printf("nao existem pontos no quadrante 1\n");
	if (cont2 != 0) 
	{
	    printf("distancias dos pontos no quadrante 2\n");
	    imprimir(q2,cont2);
	}
	else printf("nao existem pontos no quadrante 2\n");
	if (cont3 != 0) 
	{
	    printf("distancias dos pontos no quadrante 3\n");
	    imprimir(q3,cont3);
	}
	else printf("nao existem pontos no quadrante 3\n");
	if (cont4 != 0) 
	{
	    printf("distancias dos pontos no quadrante 4\n");
	    imprimir(q4,cont4);
	}
	else printf("nao existem pontos no quadrante 4\n");

	return(0);
}

void imprimir(float* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    printf(" %.2f",vet[i]); //imprimir um elemento de cada vez com 2 casas decimais
	
	printf("\n"); //apenas para pular uma linha apos imprimir o vetor
}
int quad(float x,float y) //essa funcao vale para pontos fora dos eixos
{	
	if (x>0)
	{
	  if (y>0) return(1);
	     else return(4);
	}
 	 else
	 {
	   if (y>0) return(2);
	     else return(3);
	 }
}
