#include<stdio.h>
#define N 10
void ler(int* vet,int fim);
int mdc(int x,int y); 
int main()
{
	int A[N],i,j; 
	
	printf("digite as %d componentes inteiras do vetor A: \n",N);
	ler(A,N);
	for(i=0;i<N-1;i++)
	    for(j=i+1;j<N;j++)
    	        if(A[i]%A[j]==0 || A[j]%A[i]==0 ) //resto da divisao do maior pelo menor
	               printf("%d e %d sao divisiveis\n",A[i],A[j]);
		       else if(mdc(A[i],A[j])==1) 
			  printf("%d e %d sao primos entre si\n",A[i],A[j]);
	                  else printf("%d e %d nao sao divisiveis e nem primos entre si\n",A[i],A[j]);
	    
	return(0);
}

void ler(int* vet,int fim)
{
	int i;   
	for(i=0;i<fim;i++) 
	    scanf("%d",&vet[i]); //ler um elemento de cada vez
}
int mdc(int x,int y)
{
	int resto,aux;
	if (y>x) //trocar
	{
	    aux=x;
	    x=y;
	    y=aux;
	}
	resto=x%y;
	if(resto==1) return(resto); //elementos consecutivos sao primos entre si
	else
	  {
		while(resto!=0)
		{
		     x=y;
		     y=resto;
		     resto=x%y;
		}
		return(y);
	 }
}
