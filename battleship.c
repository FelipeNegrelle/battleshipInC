#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.c>
#include <conio.h>

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
void sobre();
void regras();
void telaInicial();

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
	int tabuleiro[dificuldade][dificuldade];
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

void sobre() {
	c_textcolor(14);
	printf("Projeto desenvolvido por Felipe Negrelle\n");
	printf("Na matéria de projeto integrador I\n");
	printf("Github: https://github.com/felipenegrelle\n");
	printf("Aperte qualquer tecla para voltar ao menu inicial\n");
	getchar();
	telaInicial();
}

void regras() {
	c_textcolor(14);
	printf("O jogo consiste em acertar todos os navios do oponente.\n");
	printf("O tabuleiro é composto por 10x10 posições.\n");
	printf("Os navios são compostos por 3 partes.\n");
	printf("Os barcos que deverão ser acertados serão:\n");
	printf("1. Porta-aviões: 3 partes\n");
	printf("2. Encouraçado: 2 partes\n");
	printf("3. Submarino: 1 parte\n");
	printf("\n");
	printf("O jogador tem 3 vidas.\n");
	printf("Cada vez que o jogador acertar um navio, ele ganha um ponto.\n");
	printf("\n");
	printf("O jogador pode escolher entre 3 dificuldades:\n");
	printf("1. Fácil: tabuleiro 10x10\n");
	printf("2. Médio: tabuleiro 15x15\n");
	printf("3. Difícil: tabuleiro 20x20\n");
	printf("Bom jogo\n");
	printf("Aperte qualquer tecla para voltar ao menu inicial\n");
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
			regras();
			char opcao = getchar();
			printf("%c", opcao);
			// system("clear");
			// telaInicial();
			break;
		
		case 3:
			sobre();
			break;
		default:
			printf("Digite uma opçao valida");
			break;
	}
}
