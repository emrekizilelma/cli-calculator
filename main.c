#include <stdio.h>
#include "lib/calculator.h"
#include "lib/calculator_menu.h"

int main(int argc, char* argv[])
{
  

  int choose = 0;

  while (choose != 5)
  {
    calculator_menu();

    printf("-> Make a choose: ");
    scanf("%d", &choose);

    if(choose == 1)
    {
      printf("Result = %.2f\n", add(10, 10));
    }

  }

  return 0;
}
