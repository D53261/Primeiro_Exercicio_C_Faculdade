#include <stdio.h>
#include <stdlib.h>

int main() {
float num1,num2,num3,num4;
printf("Digite o primeiro numero: \n");
scanf("%f", &num1);
printf("Digite o segundo numero: \n");
scanf("%f", &num2);
printf("Digite o terceiro numero: \n");
scanf("%f", &num3);
printf("Digite o quarto numero: \n");
scanf("%f", &num4);

float resultado = (num1 + num2 + num3 + num4)/4;

printf("A media dos quatro numeros sera: %.2f", resultado);

return 0;

}
