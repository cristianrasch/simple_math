/*
** Cálculo del factorial de un número
** Ejemplo:
** factorial(5) -> 120
*/
int factorial(int num)
{
  if(num < 2)
    return 1;
  else
    return num * factorial(num - 1);
}

/*
** Cálculo de la serie de Fibonacci, dado un número
** Ejemplo:
** fib(6) -> 8
*/
int fibonacci(int num)
{
  if(num == 0)
    return 0;
  else if (num == 1)
    return 1;
  else
    return fibonacci(num - 1) + fibonacci(num - 2);
}
