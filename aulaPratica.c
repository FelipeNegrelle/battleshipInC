#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <conio.c>


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

void natacao(){
	int idade;
	char categoria[20];
	printf("Qual a idade do nadador?");
	scanf("%d", &idade);
	if(idade <= 5 || idade <= 7) {
		strcpy(categoria, "Infantil A");
	}
	else if(idade <= 8 || idade <= 10) {
		strcpy(categoria, "Infantil B");
	}
	else if(idade <= 11 || idade <= 13) {
		strcpy(categoria, "Juvenil A");
	}
	else if(idade <= 14 || idade <= 17) {
		strcpy(categoria, "Juvenil B");
	}
	else if(idade > 17) {
		strcpy(categoria, "Senior");
	}
	printf("A categoria designada do nadador e: %s\n", categoria);
}

void bissexto() {
	int ano;
	printf("Digite o ano, e veja se ele é bissexto:");
	scanf("%d", &ano);

	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("O ano é bissexto!\n");
	}
	else {
		printf("O ano não é bissexto\n");
	}
}

void operacoes() {
	float num1; 
	float num2;
	char operacao;

	printf("Insira dois numeros para a operação:");
	scanf("%f %f", &num1, &num2);

	printf("Digite a operação que deseja realizar:\n");
	printf("Soma: s\n");
	printf("Subtração: x\n");
	printf("Multiplicação: m\n");
	printf("Divisão: d\n");

	scanf("%c", &operacao);	
	printf("%c", operacao);

	switch(operacao) {
		case '+':
			printf("%f + %f = %f", num1, num2, (num1 + num2));
			break;

		case '-':
			printf("%f - %f = %f", num1, num2, (num1 - num2));
			break;

		case '*':
			printf("%f * %f = %f", num1, num2, (num1 * num2));
			break;

		case '/':
			printf("%f / %f = %f", num1, num2, (num1 / num2));
			break;

		default:
			printf("vc n inseriu  a operacao :(\n");
			break;
	}
}

void quadrados() {
	for (int i = 15; i <= 35; i++) {
		printf("%d^2 = %d\n", i, i*i);
	}
}

void fatorial() {
	int fatorar;
	int resultado;
	int contador;
	printf("Insira um numero para calcular seu fatorial:");
	scanf("%d", &fatorar);
	resultado = fatorar;
	for( contador = 1; contador < fatorar; contador++) {
		resultado = resultado * contador;
	}
	printf("%d! = %d", fatorar, resultado);

}

void investimento() {
/*escreva um programa que calcule juros compostos */
// n fiz pq fiquei com preguiça
}

void pares() {
	int pares;
	printf("Digite o valor maximo para achar n numeros pares:");
	scanf("%d", &pares);

	printf("os primeiros %d pares sao:\t", pares);
	for(int i = 0; i <= pares; i++){
		if( i % 2  == 0) {
			printf("%d ", i);
		}
	}
}

void vetorQuadrado() {
	int vetorA[15];
	int vetorB[15];
	printf("os valores do vetor A sao: \n");
	for (int i = 0; i<= 15; i++) {
		vetorA[i] = i;
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	printf("os valores do vetor B sao: \n");
	for(int j = 0; j <= 15; j++) {
		vetorB[j] = vetorA[j] * vetorA[j];
		printf("%d ", vetorB[j]);
	}
}

void vetorSoma() {
	int vetorA[10];
	int vetorB[10];
	int vetorC[10];
	printf("os valores do vetor A sao: \n");
	for (int i = 0; i<= 10; i++) {
		vetorA[i] = i;
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	printf("os valores do vetor B sao: \n");
	for (int j = 0; j<= 10; j++) {
		vetorB[j] = j;
		printf("%d ", vetorB[j]);
	}
	printf("\n");
	printf("os valores do vetor C sao: \n");
	for(int k = 0; k <= 10; k++) {
		vetorC[k] = vetorA[k] + vetorB[k];
		printf("%d ", vetorC[k]);
	}
	printf("\n");
}

void notas() {
	float nota1[10], nota2[10];
	float resultado[10];
	

}

int main() {
	// tabuada();
	// texto();
	// media();
	// calc();
	// quadrado();
	// conversor();
	// gasolina();
	// natacao();
	// bissexto();
	// operacoes();
	// quadrados();
	// fatorial();
	// investimento();
	// pares();
	// vetorQuadrado();
	// vetorSoma();
	return 0;
}