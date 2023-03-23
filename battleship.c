#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>

#define FACIL 10
#define	MEDIO 15
#define DIFICIL 20

void colorir(char cor[]) {
	c_textcolor(3);
	printf("%s", cor);
}

void sobre() {
	printf("Projeto desenvolvido por Felipe Negrelle\n");
	printf("Na matéria de projeto integrador I\n");
	printf("Github: https://github.com/felipenegrelle\n");
}

int selecionaDificuldade() {
	printf("Selecione a dificuldade do jogo:\n");
	printf("1. Fácil: tabuleiro 10x10\n");
	printf("2. Médio: tabuleiro 15x15\n");
	printf("3. Difícil: tabuleiro 20x20\n");

	int dificuldade;
	scanf("%d", &dificuldade);
	return dificuldade;
}

/**/

void criaTabuleiro() {
}

void novoJogo() {
	int dificuldade = selecionaDificuldade();
	
	switch(dificuldade) {
		case 1: 
			printf("deu merda");
			break;
		default:
			break;
	}
}

void telaInicial() {
	int opcao;
	printf("Bem-vindo ao jogo Batalha-Naval:\n");
	printf("1. Novo Jogo\n");
	printf("2. Continuar Jogo\n");
	printf("3. Cadastrar\n");
	printf("4. Conectar-se\n");
	printf("5. Regras\n");
	printf("6. Sobre\n");

	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			novoJogo(); 
			break;
		
		case 2:
			break;
		
		case 3:
			colorir("amarelo");
			break;
		
		case 4:

			break;
		
		case 5:

			break;
		
		case 6:
			sobre();
			break;
		
		default:
			printf("default");
			break;
	}
}

