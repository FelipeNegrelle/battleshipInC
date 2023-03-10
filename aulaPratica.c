#include <stdio.h>
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

int main() {
	// tabuada();
	// texto();
	// media();
	//calc();
	return 0;
}
