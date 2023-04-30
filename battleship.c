#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.c>
#include <conio.h>
#include "battleship.h"

//PRETO = 0, AZUL = 1, VERDE = 2, CIANO = 3, VERMELHO = 4, ROXO = 5, MARROM = 6, CINZA_CLARO = 7, CINZA_ESCURO = 8, AZUL_CLARO = 9, VERDE_CLARO = 10, CIANO_CLARO = 11, VERMELHO_CLARO = 12, ROXO_CLARO = 13, AMARELO = 14

int selecionaDificuldade() {
	printf("Selecione a dificuldade do jogo:\n");
	printf("1. Fácil: tabuleiro 10x10\n");
	printf("2. Médio: tabuleiro 15x15\n");
	printf("3. Difícil: tabuleiro 20x20\n");

	int dificuldade;
	scanf("%d", &dificuldade);
	int tamanhoTabuleiro, quantidadeBarcos;

	switch(dificuldade) {
		case 1: 
			tamanhoTabuleiro = FACIL;
			return tamanhoTabuleiro;
		case 2: 
			tamanhoTabuleiro = MEDIO;
			return tamanhoTabuleiro;

		case 3: 
			tamanhoTabuleiro = DIFICIL;
			return tamanhoTabuleiro;
		default:
			printf("Digite uma opcao valida\n");
			break;
	}
	return 1;
}

void criaTabuleiro( int tamanho, char caracter ) {
    int linha, coluna;
	int tabuleiro[tamanho][tamanho];
    for(linha = 0; linha < tamanho; linha++) {
        for(coluna=0; coluna < tamanho; coluna++) {
            tabuleiro[linha][coluna] = caracter;
        }
    }
}

void mostraTabuleiro( int tamanho ) {
	int linha, coluna;
	int tabuleiro[tamanho][tamanho];
	system("clear");
	c_textcolor(14);
	printf("\n");
	printf("\t  ");
	for(int caracter = 65; caracter < (65 + tamanho); caracter++) {
		printf("%c ", caracter);
	}

	printf("\n");
	for(linha = 0; linha < tamanho; linha++) {
		c_textcolor(14);
		printf("\t%2d", linha + 1);
		for(coluna = 0; coluna < tamanho; coluna++) {
			c_textcolor(3);
			printf("%c ", tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
}

void posicionaBarcos( int tamanho, int quantidadeBarcos) {	
	Navio barcos[3];
	barcos[0] = portaAvioes;
	barcos[1] = encouracado;
	barcos[2] = submarino;
	int linha, coluna;
	int tabuleiroControle[tamanho][tamanho];
	int linhaBarco, colunaBarco;
	int direcao;
	int barcosPosicionados = 0;
	srand(time(NULL));

	do {
		int randomLinha = rand() % tamanho;
		int randomColuna = rand() % tamanho;
		int randomDirecao = rand() % 4;
		linhaBarco = randomLinha;
		colunaBarco = randomColuna;
		direcao = randomDirecao;
		Navio barco = barcos[barcosPosicionados];
		if(direcao == 0) {
			if(linhaBarco + barco.tamanho < tamanho) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiroControle[linhaBarco + i][colunaBarco] = barco.tipo;
					printf("%c e %d", tabuleiroControle[linhaBarco][colunaBarco], quantidadeBarcos);
				}
				barcosPosicionados++;
			}
		} else if(direcao == 1) {
			if(linhaBarco - barco.tamanho >= 0) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiroControle[linhaBarco - i][colunaBarco] = barco.tipo;
					printf("%c", tabuleiroControle[linhaBarco + i][colunaBarco]);
				}
				barcosPosicionados++;
			}
		} else if(direcao == 2) {
			if(colunaBarco + barco.tamanho < tamanho) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiroControle[linhaBarco][colunaBarco + i] = barco.tipo;
					printf("%c", tabuleiroControle[linhaBarco + i][colunaBarco]);
				}
				barcosPosicionados++;
			}
		} else if(direcao == 3) {
			if(colunaBarco - barco.tamanho >= 0) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiroControle[linhaBarco][colunaBarco - i] = barco.tipo;
					printf("%c", tabuleiroControle[linhaBarco + i][colunaBarco]);
				}
				barcosPosicionados++;
			}
		}
		
	}
	while(barcosPosicionados < 3);
}
void realizaJogada(int tamanho) {
	int linha, coluna;


}

void novoJogo() {
	int tamanhoTabuleiro = selecionaDificuldade();
	int quantidadeBarcos = (tamanhoTabuleiro == 10) ? 3 : (tamanhoTabuleiro == 12) ? 4 : 5;
	char nomeDeUsuario[50];
	printf("Digite seu nome de usuario: ");
	scanf("%s", nomeDeUsuario);
	printf("%d", tamanhoTabuleiro);
	criaTabuleiro(tamanhoTabuleiro, AGUA);
	posicionaBarcos(tamanhoTabuleiro, quantidadeBarcos);
	mostraTabuleiro(tamanhoTabuleiro);
	printf("%s\n", nomeDeUsuario);

	// realizaJogada();
}


void telaInicial() {
	int opcao;
	c_textcolor(14);
	printf("Bem-vindo ao jogo Batalha-Naval:\n");
	c_textcolor(9);
	printf("1. Novo Jogo\n");
	printf("2. Regras\n");
	printf("3. Sobre\n");
	printf("4. Sair\n");

	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			novoJogo(); 
			break;
		
		case 2:
			regras();
			getchar();
			system("clear");
			telaInicial();
			break;
		
		case 3:
			sobre();
			getchar();
			system("clear");
			telaInicial();
			break;
		case 4:
			printf("Ate a proxima\n");
			break;
		default:
			printf("Digite uma opçao valida");
			system("clear");
			telaInicial();
			break;
	}
}