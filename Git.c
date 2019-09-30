#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int numero1, numero2; //Variáveis
	int* numero1_ptr, * numero2_ptr; //Ponteiros
	numero1_ptr = &numero1; // Ponteiro apontando para a variável
	numero2_ptr = &numero2;

	printf("\n*****Usando Ponteiros*****\n\n");

	printf("\nDigite um valor : ");
	scanf_s("%d", &numero1); // Armazena o numero na memória

	printf("\nDigite outro valor : ");
	scanf_s("%d", &numero2); // Armazena o segundo valor na memória

	printf("\n Os numeros digitados foram: %d, %d\n\n", *numero1_ptr, *numero2_ptr); // Mostra os números digitados na tela

	if (*numero1_ptr == *numero2_ptr) { // Condição pra ver se os números tem o mesmo valor
		printf("Os numeros digitados tem o mesmo valor\n\n");
	}
	else if (*numero1_ptr > *numero2_ptr) { // Condições pra imprimir o maior valor na tela

		printf("O primeiro valor digitado e maior %d \n", *numero1_ptr);

	}
	else printf("O segundo valor digitado e o maior %d \n", *numero2_ptr);

	system("pause");
} //Fim da função