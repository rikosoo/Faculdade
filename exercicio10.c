#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

int a,b;

printf("Digite o primeiro numero inteiro: ");

scanf("%d",&a);

printf("Digite o segundo numero inteiro: ");

scanf("%d",&b);
    
        if(a%b==0)
        {
        printf("São multiplos\n");
        }        
        else
        {
        printf("Nao sao multiplos \n");

        return 0;
        }
    
}