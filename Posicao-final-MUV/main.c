/* Cálculo para determinar a posição final de um corpo em MUV.
OBS: Dados no SI, v=m/s, a=m/s², t=s e s=m. */


#include <stdio.h>
#include <math.h>


int main()
{
 float e_posição_inicial, e_velocidade, e_aceleração, e_tempo, s_posição_final;

 printf("Forneça a posição inicial do corpo: \n");
 scanf("%f", &e_posição_inicial);

 printf("Indique a velocidade do corpo: \n");
 scanf("%f", &e_velocidade);

 printf("Entre com a aceleração do corpo: \n");
 scanf("%f", &e_aceleração);

 printf("Agora, indique o intervalo de tempo: \n");
 scanf("%f", &e_tempo);

 s_posição_final = (e_posição_inicial + (e_velocidade * e_tempo) + (((e_aceleração * pow(e_tempo,2)/2))));

 printf("Posição final: %.1fm", s_posição_final);

 return 0;

}