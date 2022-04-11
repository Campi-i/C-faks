#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"


int ucitavanje(FILE* fp) {

	int numb;

	fscanf(fp, "%d", &numb);
	printf("\n%d   \n", numb);

	return numb;
}

float** zauzimanje(int num1, int num2)
{
	float** matrica = NULL;
	matrica = (float**)calloc(num1, sizeof(float*));

	if (matrica == NULL) {
		return NULL;
	}

	for (int i = 0; i < num2; i++)
	{
		*(matrica + i) = (float*)calloc(num2, sizeof(float));

		if (*(matrica + i) == NULL) {
			return NULL;
		}
	}

	return matrica;
}
void generiranje(int num1, int num2, float** p) {

	for (int i = 0; i < num1; i++) {

		for (int j = 0; j < num2; j++) {
			*(*(p + i) + j) = -125.5 + (float)rand() / RAND_MAX * (65.8 + 125.5);
		}
	}
}
void ispis(int num1, int num2, float** p) {

	for (int i = 0; i < num1; i++) {

		for (int j = 0; j < num2; j++) {
			printf("%f ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
void ispis2(int num1, int num2, float** p, FILE* fp1) {

	for (int i = 0; i < num1 - 1; i++) {

		for (int j = 1; j < num2; j++) {
			fprintf(fp1, "%f  ", *(*(p + i) + j));
		}
		fprintf(fp1, "\n");
	}
}
