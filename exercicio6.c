#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    float Altura,AlturaxPeso;
    char Sexo;
    Altura =0.00;
    AlturaxPeso=0.00;

    printf("Digite o seu sexo (M para Masculino e F para Feminino): \n");
    fflush(stdin);
    scanf("%c",&Sexo);
    printf("Digite a sua altura (Ex.: 1.75): \n");
    fflush(stdin);
    scanf("%f",&Altura);
    
    if(Altura > 0)
    {       
        if(Sexo == 'M')
        {
            AlturaxPeso=((72.7*Altura)-58);
            printf("O seu peso ideal e: %.3f \n",AlturaxPeso);
        }
        else
        {
            AlturaxPeso=((62.1*Altura)-44.7);
            printf("O seu peso ideal e: %.3f \n",AlturaxPeso);
        }

    }
    else
    printf("Não eh uma altura valida.\n");
    
    getchar();
    return 0;
}
