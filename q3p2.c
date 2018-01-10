#include<stdio.h>
#include<stdlib.h>

typedef struct{
        char local[100];
        float val,area;
        } tpimovel;
#define N 5
float med(tpimovel *v,int fim); //calcular media 
int main()
{
	int i;
	FILE *ab,*ac;
    tpimovel imov[N];
    float media;
	
	ac=fopen("acima.txt","w");
	ab=fopen("abaixo.txt","w");
    	
	for(i=0;i<N;i++) //preencher o vetor
	{
      printf("digite a localidade\n");gets(imov[i].local);
	  printf("digite valor do aluguel:\n");scanf("%f",&imov[i].val);
	  printf("digite metros quadrados:\n");scanf("%f",&imov[i].area);getchar();
   }
   media=med(imov,N);printf("media = %.2f\n",media);
   for(i=0;i<N;i++)
      if (imov[i].val <= media) 
         {
            fprintf(ab,"local: %s\nvalor: R$ %.2f e area=%.2f\n",imov[i].local,imov[i].val,imov[i].area);
         }
         else
         {
             fprintf(ac,"local: %s\nvalor: R$ %.2f e area=%.2f\n",imov[i].local,imov[i].val,imov[i].area);
         }
	fclose(ac);fclose(ab);
	system("pause");
	return(0);
}
float med(tpimovel *v,int fim)
{
      int i;float m=0;
      for(i=0;i<fim;i++) m+=v[i].val;
      return(m/fim);
}
