#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <conio.c>

#define FACIL 10
#define	MEDIO 15
#define DIFICIL 20
/*
PRETO = 0,
AZUL = 1,
VERDE = 2,
CIANO = 3,
VERMELHO = 4,
ROXO = 5,
MARROM = 6,
CINZA_CLARO = 7,
CINZA_ESCURO = 8,
AZUL_CLARO = 9,
VERDE_CLARO = 10,
CIANO_CLARO = 11,
VERMELHO_CLARO = 12,
ROXO_CLARO = 13,
AMARELO = 14
*/
void sobre() {
	c_textcolor(14);
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

void criaTabuleiro(int dificuldade) {
    int linha, coluna;

    for(linha = 0; linha < 5 ; linha++)
        for(coluna=0; coluna < 5; coluna++)
            tabuleiro[linha][coluna]=-1;
}

void mostraTabuleiro() {
}

void novoJogo() {
	int tamanhoTabuleiro;
	int dificuldade = selecionaDificuldade();

	switch(dificuldade) {
		case 1: 
			tamanhoTabuleiro = FACIL;
			int tabuleiro[][tamanhoTabuleiro];
			break;
		case 2: 
			tamanhoTabuleiro = MEDIO;
			break;
		case 3: 
			tamanhoTabuleiro = DIFICIL;
			break;
		default:
			break;
	}
}

void telaInicial() {
	int opcao;
	c_textcolor(14);
	printf("Bem-vindo ao jogo Batalha-Naval:\n");
	c_textcolor(9);
	printf("1. Novo Jogo\n");
	printf("2. Regras\n");
	printf("3. Sobre\n");

	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			novoJogo(); 
			break;
		
		case 2:
			break;
		
		case 3:
			sobre();
			break;
		default:
			printf("default");
			break;
	}
}

