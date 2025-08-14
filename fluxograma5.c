#include <stdio.h>
#include <stdlib.h>

int main() {
float base,alt;
printf("Digite a altura do retangulo: \n");
scanf("%f", &alt);
printf("Digite a base do retangulo: \n");
scanf("%f", &base);
float resultado = base*alt;

printf("A area do retangulo sera: %.2f", resultado);


return 0;

}
