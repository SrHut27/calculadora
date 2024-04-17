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
		printf(" \n Voc� n�o pode divir um n�mero por zero... \n \n");
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
	
	printf("\n Digite o primeiro n�mero desejado:");
	scanf("%f", &numOne);
	
	printf(" \n Agora escolha uma das seguintes opera��es: \n 1 - Adi��o \n 2 - Subtra��o \n 3 - Divis�o \n 4 - Multiplica��o \n \n");
	scanf("%d", &operador);
	
	if (operador != 1 && operador != 2 && operador != 3 && operador != 4){
		printf("\n O operador informado n�o comp�e a lista \n \n");
		system("pause");
		exit(1);
	}
	
	printf("\n Agora digite o segundo n�mero que deseja operar:");
	scanf("%f", &numTwo);
	
	system("cls");
	

	if (operador == 1)
	{
		float operacao = somar(numOne, numTwo);
		printf("\n O resultado da opera��o �: %.2f \n \n", operacao);
	} 
	else if (operador == 2)
	{
		float operacao = subtrair(numOne, numTwo);
		printf("\nO resultado da opera��o �: \033[1;32m%.2f\033[0m\n\n", operacao);
	}
	else if (operador == 3)
	{
		float operacao = dividir(numOne, numTwo);
		printf("\n O resultado da opera��o �: %.2f \n \n", operacao);
	} 
	else if (operador == 4)
	{
		float operacao = multiplicar(numOne, numTwo);
		printf("\n O resultado da opera��o �: %.2f \n \n", operacao);
	}
	system("pause");
	
}