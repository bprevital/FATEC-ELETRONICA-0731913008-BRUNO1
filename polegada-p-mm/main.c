/* Conversor de Polegadas p/ Milimetros */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int e_polegada, s_milimetro;

  printf("Entre com o valor em Polegadas [inch]: \n");
  scanf("%d", & e_polegada);

  s_milimetro = 25.4 * e_polegada;
 
  printf("Valor em Milimetro: %dmm", s_milimetro);

  return 0;
}