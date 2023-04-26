#include <stdio.h>

int main(void)
{
  int v[6];

  for (int i = 0; i < 6; i++) {
    printf("Digite o valor:\n");
    scanf("%d",&v[i]);
  }

  for (int i = 0; i < 6; i++) {
    printf("Vetor na posicao %d é %d\n",i,v[i]);
  }
  return 0;
}
