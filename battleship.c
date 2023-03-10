#include <stdio.h>

char TABULEIRO;

void SOBRE() {
	printf("Projeto desenvolvido por Felipe Negrelle e Bianca Javorski?\n");
	printf("Na matéria de projeto integrador I\n");
	printf("Felipe github: https://github.com/felipenegrelle\n");
}

void TELA_INICIAL() {
	int opcao;
	printf("Bem-vindo ao jogo Batalha-Naval:\n");
	printf("1. Novo Jogo\n");
	printf("2. Continuar Jogo\n");
	printf("3. Cadastrar\n");
	printf("4. Conectar-se\n");
	printf("5. Regras\n");
	printf("6. Sobre\n");

	scanf("%d", &opcao);

	switch (opcao){
		case 1:
			printf("opcao 1\n");
			break;
		
		case 2:
		
			break;
		
		case 3:

			break;
		
		case 4:

			break;
		
		case 5:

			break;
		
		case 6:
			SOBRE();
			break;
		
		default:
			printf("default");
			break;
	}
}

