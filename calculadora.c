#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a = 0, b = 0, resultado = 0;
  int op;

  printf("\nDigite o numero referente a operacao que deseja realizar: \n");

  do
  {
    printf("\n\t1 - soma\n\t2 - subtracao\n\t3 - multiplicacao\n\t4 - divisao\n\t5 - sair\n");
    scanf("%d", &op);

    if (op == 5)
      break;

    printf("\n Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("\n Digite o segundo numero: ");
    scanf("%f", &b);

    switch (op)
    {
    case 1:
      resultado = a + b;
      break;

    case 2:
      resultado = a - b;
      break;

    case 3:
      resultado = a * b;
      break;

    case 4:
      if (b != 0)
        resultado = a / b;
      else
      {
        printf("\n Erro: Divisao por zero nao permitida.\n");
        continue;
      }
      break;

    default:
      printf("\n Digite uma opcao valida\n");
      continue;
    }

    printf("\n\t O resultado e: %0.2f", resultado);
    printf("\n Digite 1 para continuar ou qualquer outro numero para sair: ");
    scanf("%d", &op);
  } while (op == 1);

  return 0;
}
