#include<stdio.h>
#define M 5
void ler(float A[M][M]);
int main()
{
 float A[M][M],B[M][M],C[M][M];
 int i,j;
 
 printf("digite matriz de reais %dx%d\n",M,M);
 ler(A);
 printf("digite matriz de reais %dx%d\n",M,M);
 ler(B);     
        
 for(i=0;i<M;i++)
    for(j=0;j<M;j++)
        C[i][j]=(A[i][j]+B[i][j])/2;
        
 for(i=0;i<M;i++)
 {
    for(j=0;j<M;j++)
     printf(" %f",C[i][j]);
    printf("\n");
 }    
 return(0);
}
void ler(float mat[M][M])
{
      int i,j;
      
      for(i=0;i<M;i++)
       for(j=0;j<M;j++)
        scanf("%f",&mat[i][j]);
}
