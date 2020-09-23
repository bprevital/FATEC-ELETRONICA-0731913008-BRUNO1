
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int e_comprimento_base, e_comprimento_altura, s_area;

  printf("entre com o valor do comprimento da base: \n");
  scanf("%d", &e_comprimento_base);

  printf("entre com o tamanho da altura: \n");
  scanf("%d", &e_comprimento_altura);

  s_area = e_comprimento_base * e_comprimento_altura;

  printf("resultado: %dcm²", s_area);

  return 0;
  

}