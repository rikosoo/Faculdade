#include <stdio.h>
#include <math.h>

/* a função pode receber até dois parametros */
int main(int argc, char *argv[]) 
{


float dias,diaria,maior15,menor15,igual15,valor;

dias = 0;
valor = 0;
diaria = 262.50;
maior15 = 17.50;
igual15 = 18.75;
menor15 = 21.05;

/* solicitei pra imprimir na tela */
printf ("Digite o numero de diarias: "); 
/* solicitei pro programa ler o teclado, pode usar limpeza de
buffer depois c quiser */

scanf ("%f", &dias);
/* usei um condicional, se for negativo ele imprime, caso nao
ele manda pro else e imprime.*/
if(dias > 15) 
{
    diaria = dias * diaria;
    maior15 = dias * maior15;
    valor = diaria + maior15;
    printf("O Valor da reserva: %.2f \n", diaria);
    printf("O valor da taxa de servico: %.2f \n",maior15);
    printf("O valor total da reserva maior que 15 dias com a taxa de servico eh: %.2f \n",valor);    
}
else if(dias == 15)
{
    diaria = dias * diaria;
    igual15 = dias * igual15;
    valor = diaria + igual15;
    printf("O Valor da reserva: %.2f \n", diaria);
    printf("O valor da taxa de servico: %.2f \n",igual15);
    printf("O valor total da reserva igual a 15 dias com a taxa de servico eh: %.2f \n",valor);
}
else
{
    diaria = dias * diaria;
    menor15 = dias * menor15;
    valor = diaria + menor15;
    printf("O Valor da reserva: %.2f \n", diaria);
    printf("O valor da taxa de servico: %.2f \n",menor15);
    printf("O valor total da reserva menor a 15 dias com a taxa de servico eh: %.2f \n",valor);
}
/* usei o return pra finalizar o programa */

return 0;

}


