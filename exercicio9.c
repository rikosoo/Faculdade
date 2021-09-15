#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
float nota1, nota2, nota3, media;

printf("Digite a primeira nota: ");
scanf("%f",&nota1);
printf("Digite a segunda nota: ");
scanf("%f",&nota2);
printf("Digite a terceira nota: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 6.00){
printf("\n MEDIA = %.2f \n",media);
printf("\n");
printf("APROVADO\n");
}

else if ( media < 6.00){
printf("\n MEDIA = %.2f \n",media);
printf("\n");
printf("REPROVADO\n");
}
return 0;
}