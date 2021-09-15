#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
/* declaro o inteiro */
int a,b;
/* imprime pra digitar o valor inteiro */
printf("Teste se o valor e multiplo do outro.\n Exemplo 24 eh multiplo de 4\n pois 24 / 4 = 6\n");
printf("digite o primeiro numero inteiro: ");
/* le o valor inteiro */
scanf("%d",&a);
/* imprime pra digitar o valor inteiro */
printf("digite o segundo numero inteiro: ");
/* le o valor inteiro */
scanf("%d",&b);
    if(a>b)
    {
        /* condição de divisao por 2 se for par com resto 0 */
        if(a%b==0)
        {
        printf("%d eh multiplo de %d \n",a,b);
        }
        /* se nao for é impar */
        else
        {
        printf("%d nao eh multiplo de %d \n",a,b);

        return 0;
        }
    }
    else
    {
    printf("O primeiro valor eh menor que o segundo.\n");
    }
}