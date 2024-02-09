#include <stdio.h>
#include "lib/calculator.h"
#include "lib/calculator_menu.h"

int main(int argc, char* argv[])
{
  

  int choose = 0;

  calculator_menu();

  while (choose != 5)
  {
    float num1, num2 = 0;

    printf("-> Make a choose: ");
    scanf("%d", &choose);

    if(choose == 1)
    {
      printf("-> Number 1: ");
      scanf("%f", &num1);

      printf("-> Number 2: ");
      scanf("%f", &num2);

      printf("Result = %.2f\n", add(num1, num2));
    }

    else if (choose == 2)
    {
      printf("-> Number 1: ");
      scanf("%f", &num1);

      printf("-> Number 2: ");
      scanf("%f", &num2);

      printf("Result = %.2f\n", substract(num1, num2));
    
    }

    else if (choose == 3)
    {
      printf("-> Number 1: ");
      scanf("%f", &num1);

      printf("-> Number 2: ");
      scanf("%f", &num2);

      printf("Result = %.2f\n", multiply(num1, num2));
    }

    else if (choose == 4)
    {
      printf("-> Number 1: ");
      scanf("%f", &num1);

      printf("-> Number 2: ");
      scanf("%f", &num2);

      if (num2 == 0)
      {
        printf("Divide by zero error!\n");
      }
      
      else {
        printf("Result = %.2f\n", divide(num1, num2));
      }
    }
    
    }

  return 0;
}
