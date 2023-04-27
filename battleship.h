#define FACIL 10
#define	MEDIO 12
#define DIFICIL 15
#define AGUA '~'
#define DESTRUIDO '*'

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
