#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Fazer um programa em C que pergunta um valor em metros e imprime
o correspondente em decímetros, centímetros e milímetros.*/

void conversorMetros() {
	float metros;
	printf("Insira um valor em metros para converter: ");
	scanf("%f", &metros);
	printf("Valor em decimetros: %2f\n", metros * 10);
	printf("Valor em centimetros: %2f\n", metros * 100);
	printf("Valor em milimetros: %2f\n", metros * 1000);
}
/*Fazer um programa em C que imprime a tabuada de um número (1 a 9)
informado pelo usuário.*/

void tabuada() {
	int n;
	printf("Forneça um número inteiro para a tabuada: ");
	scanf("%d", &n);
	for (int i = 1; i<= 10; i++) {
		printf("\n%2d * %d = %3d", i, n, (i * n));
	}
}

/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit
e imprime no vídeo o correspondente em graus Celsius usando a fórmula que segue:
C = (F - 32.0) * (5.0 / 9.0)*/

void converteTemperatura() {
	float fahrenheit;
	printf("informe a temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	printf("a temperatura em celsius e: %f", ((fahrenheit - 32.0) * (5.0 / 9.0)));
}

/*Fazer um programa em "C" que solicite 2 números e informe:
a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número;
d) O módulo do primeiro número;
e) A razão entre os números*/

void operacoes() {
	float primeiro, segundo;
	printf("Informe dois numeros inteitos para realizar as operacoes\n");
	printf("Primeiro numero: ");
	scanf("%f", &primeiro);
	printf("Segundo numero: ");
	scanf("%f", &segundo);
	printf("A soma dos dois numeros e: %f\n", (primeiro + segundo));
	printf("O produto do primeiro pelo segundo ao quadrado e: %f\n", (primeiro * (segundo * segundo)));
	printf("O quadrado do primeiro numero e: %f\n", primeiro * primeiro);
	printf("O modulo do primeiro numero e: %f\n", fmod(primeiro, segundo));
	printf("A razao entre o primeiro e o segundo e: %f\n", primeiro/segundo);
}

/*Fazer um programa em "C" que lê o preço de um produto e inflaciona
esse preço em 15% se ele for menor que 80 e em 25% se ele for maior ou igual a 80.*/

void inflacao() {
	float produto;
	printf("Digite o valor de um produto para passar pelo inflacionador: ");
	scanf("%f", &produto);
	if(produto >= 80.0) {
		printf("O inflacionador o taxou em 25%% seu preco final e: %f\n", (produto * 25 / 100) + produto);
	}
	else {
		printf("o inflacionador o taxou em 15%% seu preco final e: %f\n", (produto * 15 / 100) + produto);
	}
}

/*Fazer um programa em "C" que solicita as notas das duas provas feitas
por cada um dos alunos de uma turma (as notas têm de estar no intervalo [0 10]) e
imprime para cada um a média das notas.*/

void notas() {
	int nota1[10], nota2[10];
	printf("Insira as notas dos alunos:\n");
	for(int i = 1; i <= 10; i++) {
		printf("Insira a nota 1 do aluno %d: ", i);
		scanf("%d", &nota1[i]);
		printf("\n");
		printf("Insira a nota 2 do aluno %d: ", i);
		scanf("%d", &nota2[i]);
		printf("\n");
		printf("A media das notas do aluno %d e: %d", i, ((nota1[i]+nota2[i])/2));
		printf("\n");
	}
	exit(0);
}

int main() {
	conversorMetros();
	printf("\n");
	tabuada();
	printf("\n");
	converteTemperatura();
	printf("\n");
	operacoes();	
	printf("\n");
	inflacao();
	printf("\n");
	notas();
	printf("\n");
	return 0;
}
