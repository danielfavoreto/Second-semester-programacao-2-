#include<stdio.h>
int main()
{
  int i,n;
  float mc,peso,altura;
  char nome[50];
  FILE *arqe,*arqs1,*arqs2;   
  
  arqe=fopen("pacientes.txt","r");
  if (arqe==NULL)
  {
     printf("arquivo nao encontrado\n");
     exit(0);               
  }
  arqs1=fopen("abaixo.txt","w");
  arqs2=fopen("acima.txt","w");
  
  fscanf(arqe,"%d\n",&n); //para testar, retirar o \n
  for(i=0;i<n;i++)
  {
      fgets(nome,50,arqe);    
      fscanf(arqe,"%f%f\n",&peso,&altura);  //para testar, retirar o \n
      mc=peso/(altura*altura);
      if (mc > 25.0) fputs(nome,arqs2);
         else if (mc < 17.0) fputs(nome,arqs1);
  }
  fclose(arqe);
  fclose(arqs1);
  fclose(arqs2);
//  system("pause");
  return(0);  
}
