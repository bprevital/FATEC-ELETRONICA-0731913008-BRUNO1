/*  Cálculo de resistência a partir dos valores de tensão e corrente */


#include <stdio.h>
#include <stdlib.h>

int main()
{
  float e_tensao, e_corrente, s_resistencia;

  printf("Forneça o valor da tensão: \n");
  scanf("%f", &e_tensao);

  printf("Agora, forneça o valor da corrente: \n");
  scanf("%f", &e_corrente);

  s_resistencia = e_tensao/e_corrente;

  printf("Resistência: %fohms",s_resistencia);

  return 0;
}