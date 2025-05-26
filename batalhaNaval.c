#include <stdio.h>
//Batalha Naval - Modo Aventureiro

int main() {

	//Matriz representando o tabuleiro
	int tabuleiro[10][10] = { 0 };

	//Vetores (arrays unidimensionais) para representar os navios
	int navio1[3] = { 3,3,3 };
	int navio2[3] = { 3,3,3 };
	int navio3[3] = { 3,3,3 };
	int navio4[3] = { 3,3,3 };

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

	// Coordenadas de início do navio3
	int linha_navio3 = 5;
	int coluna_navio3 = 0;

	// Posicionamento do navio3 (diagonal-sudoeste)
	for (int i = 0; i < 3; i++) {
		tabuleiro[linha_navio3 - i][coluna_navio3 + i] = navio3[i];
	}

	// Coordenadas de início do navio4
	int linha_navio4 = 7;
	int coluna_navio4 = 7;

	// Posicionamento do navio4 (diagonal-sudeste)
	for (int i = 0; i < 3; i++) {
		tabuleiro[linha_navio4 + i][coluna_navio4 + i] = navio4[i];
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
