#include <stdio.h>

int main(void)
{
  int habitantes, codigo_consumidor;
  float valor_kwh,consumo,media_consumo,maior_consumo,menor_consumo;
  float soma_consumo=0.0,
        soma_residencial=0.0,
        soma_comercial=0.0,
        soma_industrial=0.0;
  
  printf("Diga a quantidade de habitantes:\n");
  scanf("%d",&habitantes);
  printf("Diga o valor do kwh:\n");
  scanf("%f",&valor_kwh);
  
  for (int i = 1; i <= habitantes; i++) {
    printf("Diga o consumo do mes:\n");
    scanf("%f",&consumo);
    printf("Codigo do consumidor:\n1 -> Residencial\n2 -> Comercial\n3 -> Industrial\nDigite o seu código: ");
    scanf("%i",&codigo_consumidor);
    
    soma_consumo=soma_consumo+consumo;
    if (i == 1) {
      maior_consumo=consumo;
      menor_consumo=consumo;
    }else{
      if (consumo>maior_consumo) {
        maior_consumo=consumo;
      } else if (consumo<menor_consumo) {
        menor_consumo=consumo;
      }
    }
    switch (codigo_consumidor) {
      case 1:
        soma_residencial=soma_residencial+consumo;
        break;
      case 2:
        soma_comercial=soma_comercial+consumo;
        break;
      case 3:
        soma_industrial=soma_industrial+consumo;
        break;
      default:
        printf("Digite um valor possível do código de consumidor");
        break;
      }
  }

  media_consumo=soma_consumo/habitantes;
  printf("Maior consumo: %.2f\nMenor consumo: %.2f\n",maior_consumo,menor_consumo);
  printf("Media de consumo por habitante: %.2f kwh p/ habitante\n",media_consumo);
  printf("Consumo das categorias\nResidencial: %.2f kwh\nComercial: %.2f kwh\nIndustrial: %.2f\n",soma_residencial,soma_comercial,soma_industrial);
}
