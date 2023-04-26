#include <stdio.h>
#include <math.h>

#define LENGTH 8

int main(void)
{
  int recebe[LENGTH];
  int x,y; 
  int soma;

  for (int i = 0; i < LENGTH; i++) {
    printf("Digite o valor:\n");
    scanf("%d",&recebe[i]);
  }
  
  printf("Digite um valor entre 0 e 8\n");
  scanf("%d",&x);
  printf("Digite um valor entre 0 e 8\n");
  scanf("%d",&y);

  if ((x<0||x>8)||(y<0||y>8))
  {
    printf("Digite um valor válido, execute o programa novamente\n");
    return 0;
  }else
  {
    soma=recebe[x]+recebe[y];
    printf("Soma:%d",soma);
  }
  return 0;
}
