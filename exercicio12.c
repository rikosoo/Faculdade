#include <stdio.h>

int main(int argc, char *argv[]) 
{
  /* dados de entrada */
  int n1, n2, n3;  
  
  
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &n3);
  
  if (n3 > n1)
    {
      if (n1 > n2)
	{
	  printf("O maior valor eh: %d \n", n3);
	}
      else 
	{
	  if (n2 < n3)
	    {
	      printf("O maior valor eh: %d \n", n3);
	    }
	}
    }
  
  if (n1 > n2)
    {
      if (n2 > n3)
	{
	  printf("O maior valor eh: %d\n", n1);
	}
      else 
	{
	  if (n3 < n1)
	    {
	      printf("AO maior valor eh: %d\n",n1);
	    }
	}
    }
  
  if (n1 < n2)
    {
      if (n3 < n1)
	{
	  printf("O maior valor eh: %d\n",n2);
	}
      else 
	{
	  if (n3 < n2)
	    {
	      printf("O maior valor eh: %d\n",n2);
	    }
	}
    }
  return 0;
}