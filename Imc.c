#include <stdio.h>
int main ()
{

	float altura , peso, imc;
	printf("insira sua altura :");
	scanf("%f", &altura);
	printf("insira seu peso :");
	scanf("%f", &peso);

	imc = peso / (altura * altura);

	printf("%f", imc);
	if (imc < 18.5)
	{
		printf("Voce este abaixo do peso ideal");
	}
	else if (imc >= 18.5 && imc < 24.9)
	{
		printf("Parabens  voce este em seu peso normal");
	}
	else if (imc >= 25.0 && imc <= 29.9)
	{
		printf("Voce este acima de seu peso sobrepeso");
	}
	else if(imc >= 30.0 && imc >= 34.9)
	{

		printf("Obesidade grau I");
	}
	else if(imc >= 35 && imc <= 39.9)
	{
		printf("Obesidade grau II");
	}
	else if(imc >= 40.0)
	{
		printf("Obesidade grau III");
	}

}











