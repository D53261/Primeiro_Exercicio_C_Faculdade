#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario;
    printf("Digite seu salario: \n");
    scanf("%f", &salario);
    float salario_diario = salario / 30;
    printf("Seu salario e %.2f \n", salario_diario);
    return 0;
}
