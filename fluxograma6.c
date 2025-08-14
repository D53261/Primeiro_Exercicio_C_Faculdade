// Calcular a área de um círculo

#include <stdio.h>
#include <stdlib.h>

int main() {
float raio;
printf("Digite o raio do circulo: \n");
scanf("%f", &raio);

float resultado = 3.14*(raio*raio);

printf("A area do circulo sera: %.2f", resultado);

return 0;

}
