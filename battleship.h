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

typedef struct Navios{
	int tamanho;
	char tipo;
} Navio;

Navio portaAvioes = {.tamanho = 3, .tipo = 'P'};
Navio encouracado = {.tamanho = 2, .tipo = 'E'};
Navio submarino = {.tamanho = 1, .tipo = 'S'};