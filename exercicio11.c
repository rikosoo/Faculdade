#include <stdio.h>

void main() {
  int idade;

  printf("Informe a idade do nadador: ");
  scanf("%d", &idade);

  if (idade < 5)
     printf("\nSem classificação.");
  else if (idade <= 7)
	    {
        printf("\nInfantil A\n");
        printf("\n");
        }
       else if (idade <= 10)
            {
	        printf("\nInfantil B\n");
            printf("\n");
            }
	    else if (idade <= 13)
            {
		    printf("\nJuvenil A\n");
            printf("\n");
            }
		 else if (idade <= 17)
            {
			printf("\nJuvenil B\n");
            printf("\n");
            }
		      else
              {
			    printf("\nSênior\n");
                printf("\n");
              }
}