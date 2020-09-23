/* Cobersão de Celsius p/ Fahrenheit */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float e_celsius, s_fahrenheit;

  printf("Forneça a temperatura em Celsius: \n");
  scanf("%f", &e_celsius);

  s_fahrenheit = e_celsius * 1.8 + 32;

  printf("Resultado: %0.f°F", s_fahrenheit);

  return 0;
}