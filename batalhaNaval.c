#include <stdio.h>
//Batalha Naval - Novato

int main() {
	
	//matriz (array bidimensional) representando o tabuleiro
	int tabuleiro[10][10] = {0};

	//dois vetores (arrays unidimensionais) para representar os navios
	int navio1[3] = { 3,3,3 };
	int navio2[3] = { 3,3,3 };

	// Coordenadas de início do navio1
	int linha_navio1 = 1;
	int coluna_navio1 = 2;

	// Posicionamento do navio1 (horizontal)

	for (int i = 0; i < 3; i++) {
		tabuleiro[linha_navio1][coluna_navio1 + i] = navio1[i];
	}

	// Coordenadas de início do navio2
	int linha_navio2 = 2;
	int coluna_navio2 = 6;

	// Posicionamento do navio2 (vertical)

	for (int i = 0; i < 3; i++) {
		tabuleiro[linha_navio2 + i][coluna_navio2] = navio2[i];
	}

	// Imprimir tabuleiro
	printf("Tabuleiro:\n\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf(" %d ", tabuleiro[i][j]);
			if (j < 9) {
				printf("|");
			}
		}
		printf("\n");
		if (i < 9) {
			for (int corte = 0; corte < 10; corte++) {
				printf("--- ");
			}
		printf("\n");
		}
	}

	return 0;
}