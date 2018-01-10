#include<stdio.h>
#define M 4
#define N 10
int main()
{
 float A[M][N],media,maior;
 int i,j,k;
 
 printf("digite matriz de reais %dx%d\n",M,N);
 for(i=0;i<M;i++)
    for(j=0;j<N;j++)
        scanf("%f",&A[i][j]);
 //inicializacao
 maior=media=0;
 for(j=0;j<N;j++) 
     media+=A[0][j];
 maior=media/N;
 
 for(i=1;i<M;i++)
 {
    media=0;
    for(j=0;j<N;j++)
        media+=A[i][j];
    media=media/N;
    if (media > maior)
    {
       maior=media;
       k=i;
    }
 }
 printf("maior media = %f\n",maior);
 printf("linha da matriz foi %d\n",k);
 for(j=0;j<N;j++)
     printf(" %f",A[k][j]);
 printf("\n");    
 return(0);
}
