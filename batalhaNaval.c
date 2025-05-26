#include <stdio.h>

int main() {

	//Matrizes
	int tabuleiro[10][10] = { 0 };
	int habilidade_cone[5][5] = {
	{0, 0, 1, 0, 0},
	{0, 1, 1, 1, 0},
	{1, 1, 1, 1, 1},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0}
	};
	int habilidade_cruz[5][5] = {
	{0, 0, 1, 0, 0},
	{0, 0, 1, 0, 0},
	{1, 1, 1, 1, 1},
	{0, 0, 1, 0, 0},
	{0, 0, 1, 0, 0}
	};
	int habilidade_octaedro[5][5] = {
	{0, 0, 1, 0, 0},
	{0, 1, 0, 1, 0},
	{1, 0, 0, 0, 1},
	{0, 1, 0, 1, 0},
	{0, 0, 1, 0, 0}
	};

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

	// Coordenadas da habilidade em cone
	int linha_cone = 4;
	int coluna_cone = 4;
	// Sobreposição da habilidade em cone
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (habilidade_cone[i][j] == 1) {
				int linha_tabuleiro = linha_cone + i - 2;
				int coluna_tabuleiro = coluna_cone + j - 2;
				if (linha_tabuleiro >= 0 && linha_tabuleiro < 10 && coluna_tabuleiro >= 0 && coluna_tabuleiro < 10) {
					if (tabuleiro[linha_tabuleiro][coluna_tabuleiro] == 0) {
						tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
					}
				}

			}
		}
	}

	// Coordenadas da habilidade em cruz
	int linha_cruz = 7;
	int coluna_cruz = 2;
	// Sobreposição da habilidade em cruz
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (habilidade_cruz[i][j] == 1) {
				int linha_tabuleiro = linha_cruz + i - 2;
				int coluna_tabuleiro = coluna_cruz + j - 2;
				if (linha_tabuleiro >= 0 && linha_tabuleiro < 10 && coluna_tabuleiro >= 0 && coluna_tabuleiro < 10) {
					if (tabuleiro[linha_tabuleiro][coluna_tabuleiro] == 0) {
						tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
					}
				}

			}
		}
	}

	// Coordenadas da habilidade em octaedro
	int linha_octa = 5;
	int coluna_octa = 9;
	// Sobreposição da habilidade em octaedro
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (habilidade_octaedro[i][j] == 1) {
				int linha_tabuleiro = linha_octa + i - 2;
				int coluna_tabuleiro = coluna_octa + j - 2;
				if (linha_tabuleiro >= 0 && linha_tabuleiro < 10 && coluna_tabuleiro >= 0 && coluna_tabuleiro < 10) {
					if (tabuleiro[linha_tabuleiro][coluna_tabuleiro] == 0) {
						tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
					}
				}

			}
		}
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