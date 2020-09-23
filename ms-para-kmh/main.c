/* Conversor de velocidade de m/s para km/h */

#include <stdio.h>
#include <stdlib.h>


int main()
{
  int e_metroporseg, s_kmporh;

  printf("Coloque o valor em m/s: \n");
  scanf("%d", & e_metroporseg);

  s_kmporh = 3.6 * e_metroporseg;

  printf("Valor obtido: %d[km/h]", s_kmporh);


  return 0;

}