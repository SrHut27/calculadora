#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

float somar(float a, float b)
{
	float soma = a+b;
	return soma;
}

float subtrair(float a, float b)
{
	float subtracao = a - b;
	return subtracao;
}

float dividir(float a, float b)
{
	float divisao = a / b;
	
	if (b == 0){
		printf(" \n Você não pode divir um número por zero... \n \n");
		system("pause");
		exit(1);
	}
	return divisao;
}

float multiplicar(float a, float b)
{
	float multiplicacao = a * b;
	return multiplicacao;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float numOne, numTwo;
	int operador;
	
	printf("\n Digite o primeiro número desejado:");
	scanf("%f", &numOne);
	
	printf(" \n Agora escolha uma das seguintes operações: \n 1 - Adição \n 2 - Subtração \n 3 - Divisão \n 4 - Multiplicação \n \n");
	scanf("%d", &operador);
	
	if (operador != 1 && operador != 2 && operador != 3 && operador != 4){
		printf("\n O operador informado não compõe a lista \n \n");
		system("pause");
		exit(1);
	}
	
	printf("\n Agora digite o segundo número que deseja operar:");
	scanf("%f", &numTwo);
	
	system("cls");
	

	if (operador == 1)
	{
		float operacao = somar(numOne, numTwo);
		printf("\n O resultado da operação é: %.2f \n \n", operacao);
	} 
	else if (operador == 2)
	{
		float operacao = subtrair(numOne, numTwo);
		printf("\nO resultado da operação é: \033[1;32m%.2f\033[0m\n\n", operacao);
	}
	else if (operador == 3)
	{
		float operacao = dividir(numOne, numTwo);
		printf("\n O resultado da operação é: %.2f \n \n", operacao);
	} 
	else if (operador == 4)
	{
		float operacao = multiplicar(numOne, numTwo);
		printf("\n O resultado da operação é: %.2f \n \n", operacao);
	}
	system("pause");
	
}