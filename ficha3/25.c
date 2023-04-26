#include <stdio.h>

int main(void)
{
  int soma=0;
  int numero=0;

  for (int i = 0; i < 1000; i++) {
    if ((i%3==0)||(i%5==0))
    {
      soma=soma+(i+1);
      printf("i=%d\nsoma=%d\n",i,soma);
    }
  }

  return 0;
}
