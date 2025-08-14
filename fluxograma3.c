#include <stdio.h>
#include <stdlib.h>

int main () {

//CRIANDO UMA VARIAVEL
int valor1, valor2, valor3;

//SOLICITAR AO USUARIO PARA DIGITAR UM VALOR
printf("Digite o primeiro valor: \n");

//REALIZANDO A ENTRADA DE DADOS
scanf("%d", &valor1);

printf("Informe o segundo valor: \n");
scanf("%d", &valor2);

printf("Informe o terceiro valor: \n");
scanf("%d", &valor3);

int resultado = valor1 + valor2 + valor3;

//APRESENTANDO O RESULTADO
printf("O resultado da soma dos tres valores e: %d \n", resultado);

system("pause");
return 0;

}
