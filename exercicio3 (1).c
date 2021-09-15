#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
/* declaro o inteiro */
int nmr;
/* imprime pra digitar o valor inteiro */
printf("digite um numero inteiro: ");
/* le o valor inteiro */
scanf("%d",&nmr);
/* condição de divisao por 2 se for par com resto 0 */
if(nmr%2==0)
{
printf("%d eh Par \n",nmr);
}
/* se nao for é impar */
else
printf("%d eh Impar \n",nmr);

return 0;
}