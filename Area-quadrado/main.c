/* Programa que realiza cáculo de área de um quadrado */

#include <stdio.h>
#include <stdlib.h>


int main()
{
  int e_comprimento_aresta, s_area;

  printf("Entre com o valor do comprimento da aresta do quadrado em cm:\n");
  scanf("%d", &e_comprimento_aresta);

  s_area = e_comprimento_aresta * e_comprimento_aresta;

  printf("Resultado: %dcm²\n", s_area);
  
  
  return 0;



}