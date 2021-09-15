#include <stdio.h>
#include <math.h>

/* a função pode receber até dois parametros */
int main(int argc, char *argv[]) 
{
/* declarei o inteiro */
float nmr,desconto,quinze,vinte;
nmr = 0.00;
desconto = 0.00;
quinze = 0.00;
vinte = 0.00;

/* solicitei pra imprimir na tela */
printf ("Digite o valor da compra: "); 
/* solicitei pro programa ler o teclado, pode usar limpeza de
buffer depois c quiser */

scanf ("%f", &nmr);
/* usei um condicional, se for negativo ele imprime, caso nao
ele manda pro else e imprime.*/
if(nmr > 5000) 
{
    desconto = nmr * 0.2;
    vinte = nmr - desconto;
    printf("O valor da compra com 20% de descontro eh: %.2f  \n",vinte);    
}
else 
{
    desconto = nmr * 0.2;
    quinze = nmr - desconto;
    printf("O valor da compra com 15% de descontro eh: %.2f \n",quinze);
}
/* usei o return pra finalizar o programa */
return 0;

}


