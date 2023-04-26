#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.c>
#include <conio.h>

#define FACIL 10
#define	MEDIO 12
#define DIFICIL 15
#define AGUA '~'
#define DESTRUIDO '*'

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
void escreveArquivoTxt(char linha[100]);
void telaInicial();
void leArquivoTxt();
void realizaJogada();

void sobre() {
	system("clear");
	c_textcolor(14);
	printf("Projeto desenvolvido por Felipe Negrelle\n");
	printf("Na matéria de projeto integrador I\n");
	printf("Github: https://github.com/felipenegrelle\n");
	printf("Aperte qualquer tecla para voltar ao menu inicial\n");
	getchar();
}

void regras() {
	system("clear");
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
	getchar();
}

void escreveArquivoTxt(char linha[100]) {
	FILE *arquivo;
	
	arquivo = fopen("batalha-naval.txt", "w");
	
	if(arquivo == NULL) {
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}
	
	fputs(linha, arquivo);
	fclose(arquivo);
}

void leArquivoTxt() {
	FILE *arquivo;
	char linha[100];
	char *result;
	
	arquivo = fopen("batalha-naval.txt", "r");
	
	if(arquivo == NULL) {
		printf("Erro ao abrir o arquivo\n");
		exit(1);
	}
	
	while(!feof(arquivo)) {
		result = fgets(linha, 100, arquivo);
		if(result) {
			printf("%s", linha);
		}
	}
	fclose(arquivo);
}

int selecionaDificuldade() {
	printf("Selecione a dificuldade do jogo:\n");
	printf("1. Fácil: tabuleiro 10x10\n");
	printf("2. Médio: tabuleiro 15x15\n");
	printf("3. Difícil: tabuleiro 20x20\n");

	int dificuldade;
	scanf("%d", &dificuldade);
	int tamanhoTabuleiro;

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

void posicionaBarcos( int tamanho ) {

	typedef struct Navios{
		int tamanho;
		char tipo;
	} Navio;

	Navio portaAvioes;
	portaAvioes.tamanho = 3;
	portaAvioes.tipo = 'P';

	Navio encouracado;
	encouracado.tamanho = 2;
	encouracado.tipo = 'E';

	Navio submarino;
	submarino.tamanho = 1;
	submarino.tipo = 'S';

	Navio barcos[3];
	barcos[0] = portaAvioes;
	barcos[1] = encouracado;
	barcos[2] = submarino;
 
	int linha, coluna;
	int tabuleiro[tamanho][tamanho];
	int linhaBarco, colunaBarco;
	int direcao;
	int barco;
	int barcosPosicionados = 0;
	srand(time(NULL));

	do {
		int randomLinha = rand() % tamanho;
		int randomColuna = rand() % tamanho;
		int randomDirecao = rand() % 4;
		linhaBarco = randomLinha;
		colunaBarco = randomColuna;
		direcao = randomDirecao;
		barco = barcos[barcosPosicionados];
		if(direcao == 0) {
			if(linhaBarco + barco.tamanho < tamanho) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiro[linhaBarco + i][colunaBarco] = barco.tipo;
				}
				barcosPosicionados++;
			}
		} else if(direcao == 1) {
			if(linhaBarco - barco.tamanho >= 0) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiro[linhaBarco - i][colunaBarco] = barco.tipo;
				}
				barcosPosicionados++;
			}
		} else if(direcao == 2) {
			if(colunaBarco + barco.tamanho < tamanho) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiro[linhaBarco][colunaBarco + i] = barco.tipo;
				}
				barcosPosicionados++;
			}
		} else if(direcao == 3) {
			if(colunaBarco - barco.tamanho >= 0) {
				for(int i = 0; i < barco.tamanho; i++) {
					tabuleiro[linhaBarco][colunaBarco - i] = barco.tipo;
				}
				barcosPosicionados++;
			}
		}
		
	}

	while(barcosPosicionados < 3);
}
// void realizaJogada(int tamanho) {
// 	int linha, coluna;


// }

void novoJogo() {
	int tamanhoTabuleiro = selecionaDificuldade();
	char nomeDeUsuario[50];
	printf("Digite seu nome de usuario: ");
	scanf("%s", nomeDeUsuario);
	criaTabuleiro(tamanhoTabuleiro, AGUA);
	posicionaBarcos(tamanhoTabuleiro);
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