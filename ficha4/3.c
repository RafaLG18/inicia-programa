#include <stdio.h>
#include <math.h>
int main(void)
{
  float recebe[10];
  float quadrado[10];
  for (int i = 0; i < 10; i++) {
    printf("Digite o valor:\n");
    scanf("%f",&recebe[i]);
  }
  
  for (int i = 0; i < 10; i++) {
    quadrado[i]=pow(recebe[i],2);
    printf("%f\n",quadrado[i]);
  }
  return 0;
}
