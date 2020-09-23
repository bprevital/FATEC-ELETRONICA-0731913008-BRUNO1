/* Cálculo de posição de corpoem movimento uniforme */

#include <stdio.h>
#include <math.h>

int main()
{
  float e_posição_inicial, e_velocidade, e_tempo, s_posição_final;

  printf("Forneça a posição do corpo: \n");
  scanf("%f", &e_posição_inicial);

  printf("Insira a velocidade do corpo: \n");
  scanf("%f", &e_velocidade);

  printf("Coloque o valor do intervalo de tempo: \n");
  scanf("%f", &e_tempo);

  s_posição_final = e_posição_inicial + e_velocidade * e_tempo;

  printf("Posição final: %.1fm", s_posição_final);

  return 0;
}