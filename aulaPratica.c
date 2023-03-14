#include <stdio.h>
#include <stdlib.h>

 void tabuada() {
	int n;
	printf("Forneça um número inteiro para a tabuada: ");
	scanf("%d", &n);
	for (int i = 1; i<= 10; i++) {
		printf("\n%2d * %d = %3d", i, n, (i * n));
	}
}
 void texto() {
	char c1, c2, c3, c4, c5 ,c6 ,c7, c8, c9;

	c1 = 'U';
	c2 = 'n';
	c3 = 'i';
	c4 = 'f';
	c5 = 'a';
	c6 = 'c';
	c7 = 'e';
	c8 = 'a';
	c9 = 'r';
	printf("%c%c%c%c%c%c%c%c%c" , c1, c2, c3, c4, c5, c6, c7, c8, c9);
}

void media() {
	printf("a média é: %1.2f", (15+14+21)/3.0);
}

void calc() {
	int a, b;
	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &a);
	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &b);
	printf("\n%d", a + b);
	printf("\n%d", a - b);
	printf("\n%d", a * b);
	printf("\n%f", (float) a/b );
}

void quadrado() {
	int n;
	printf("Insira um numero inteiro para elevar ao quadrado: ");
	scanf("%d", &n);
	printf("%d ao quadrado e: %d\n", n, n*n);
}

void conversor() {
	float cotacaoDolar = 5.25;
	float valorReal;
	printf("insira um valor em real para ser convertido: ");
	scanf("%f", &valorReal);
	printf("a cotacao do dolar em 13/03/2023 e: %.2f", cotacaoDolar);
	printf("O valor em dolares e: %.2f \n", valorReal/cotacaoDolar);
}

void gasolina() {
	float rendimento, precoGasolina, distancia, pedagio;
	printf("Calcule o custo de sua viagem\n");
	printf("informe o rendimento do veiculo em km/litro: ");
	system("clear");
	scanf("%f", &rendimento);
	printf("informe o preco da gasolina: ");
	scanf("%f", &precoGasolina);
	system("clear");
	printf("informe a distancia do trajeto em km: ");
	scanf("%f", &distancia);
	system("clear");
	printf("informe o valor total gasto nos pedagios: ");
	scanf("%f", &pedagio);
	system("clear");

	printf("o valor total da viagem sera: %2f \n",  (distancia / rendimento) * precoGasolina + pedagio);

}

int main() {
	// tabuada();
	// texto();
	// media();
	// calc();
	// quadrado();
	// conversor();
	// gasolina();
	return 0;
}
