#include<stdio.h>
#include<string.h>
#define N 30
int main()
{
    char st1[40],st2[40]="costa";
    int i,cont=0;
    
    for(i=0;i<30;i++)
    {
       printf("digite o nome completo\n");
       gets(st1);
       if(strstr(st1,st2)!=0)  //strstr(st1,st2) avalia se há ocorrencia de st2 dentro do st1.
          cont++; 
    }
    
    printf("num de nome com %s = %d\n",st2,cont);
    return(0);
}
