#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "header.h"

int ucitavanje(FILE* fp) {

	int numb;

	fscanf(fp, "%d", &numb);
	printf("\n%d   \n", numb);

	return numb;
}


void upis(FILE* fp1, int numb) {

	char ime[20] = { '\0' };
	char prezime[20] = { '\0' };


	for (int i = 0; i < numb; i++) {
		printf("Unesite ime %d studenta: ", i + 1);
		scanf("%19s", ime);


		printf("\nUnesite prezime studenta: ");
		scanf("%19s", prezime);

		fprintf(fp1, "Student broj: %d\tIme: %s \t Prezime: %s", i + 1, ime, prezime);
		fprintf(fp1, "\n");
	}
}
