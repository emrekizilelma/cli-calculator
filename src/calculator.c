#include <stdio.h>

float add(float num1, float num2)
{
  return num1 + num2;
}

float substract(float num1, float num2)
{
  return num1 - num2;
}

float multiply(float num1, float num2)
{
  return num1 * num2;
}

float divide(float num1, float num2)
{
  if (num2 == 0)
  {
    printf("Cannot divide by zero!\n");
  }

  return num1 / num2;
}
