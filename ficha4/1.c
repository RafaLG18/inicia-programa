#include <stdio.h>

int main(void)
{
  int v[6];
  int soma;

  for (int i = 0; i < 6; i++) {
    printf("Digite o valor:\n");
    scanf("%d",&v[i]);
  }
  soma=v[0]+v[1]+v[5];
  printf("Soma=%d\n",soma);

  v[3]=100;
  for (int i = 0; i < 6; i++) {
    printf("Vetor na posicao %d é %d\n",i,v[i]);
  }
  return 0;
}
