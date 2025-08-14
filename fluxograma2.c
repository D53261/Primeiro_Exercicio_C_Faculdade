#include <stdio.h>
#include <stdlib.h>

int main () {

//CRIANDO UMA VARIAVEL
float valor1, valor2;

//SOLICITAR AO USUARIO PARA DIGITAR UM VALOR
printf("Digite o primeiro valor: \n");

//REALIZANDO A ENTRADA DE DADOS
// %d -> VALOR INTEIRO
// %f -> VALOR DECIMAL
// %c -> CARACTER
// & -> MANUPULAÇÃO DE VALOR INDICADO PELA VARIAVEL
scanf("%f", &valor1);

printf("Informe o segundo valor: \n");
scanf("%f", &valor2);

float resultado = valor1 / valor2;

//APRESENTANDO O RESULTADO
printf("O resultado da soma dos dois valores e: %.2f \n", resultado);

system("pause");
return 0;

}
