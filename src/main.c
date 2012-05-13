#include <stdio.h>

#include "math.h"

int main()
{
  int i;
  
  printf("\nCalculo de factoriales:\n\n");
  for(i=0; i<11; i++)
    printf("%d! = %d\n", i, factorial(i));
    
  printf("\nCalculo de la serie de Fibonacci:\n\n");
  for(i=10; i>=0; i--)
    printf("fib(%d) = %d\n", i, fibonacci(i));
}
