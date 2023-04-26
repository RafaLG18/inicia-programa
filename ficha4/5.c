#include <stdio.h>
#include <math.h>

#define LENGTH 10 

int main(void)
{
  int recebe[LENGTH];
  int x,y; 
  int conta=0;
  for (int i = 0; i < LENGTH; i++) {
    printf("Digite o valor:\n");
    scanf("%d",&recebe[i]);
  }
  for (int i = 0; i < LENGTH; i++) {
    if ((recebe[i]%2)==0)    
    {
      printf("recebe[%d]=%d\n",i,recebe[i]);
      conta++;
    }
  }

  printf("Esse vetor tem %d numeros pares\n",conta);
  
  return 0;
}
