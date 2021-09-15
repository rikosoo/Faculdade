#include <stdio.h>
#include <math.h>

/* a função pode receber até dois parametros */
int main(int argc, char *argv[]) 
{

    float a,b,c;

    printf("Digite o valor do lado direito do triangulo: \n");
    scanf("%f",&a);
    printf("Digite o valor do lado esquerdo do triangulo: \n");
    scanf("%f",&b);
    printf("Digite o valor da base do triangulo: \n");
    scanf("%f",&c);

    if((a + b > c)&&(a + c > b)&&(b + c > a))
    {
        printf("Os tres lados permitem forma um triangulo. \n\n");
        if((a == b) && ( a == c))
        {
        printf("Eh um triangulo Equilatero. \n");
        }
        else if((a == b ) || (a == c) || (b == c))
        {
        printf("Eh um triangulo Isosceles \n");
        }
        else
        {
        printf("Eh um triangulo Escaleno \n");
        printf("\n");
        }
    }
    else
    printf("Os tres lados nao formam um triangulo.\n");

    return 0;
}