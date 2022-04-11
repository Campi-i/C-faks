/*Napisati C program koji će iz datoteke "in.txt" učitati dva cijela broja. Popuniti realnu matricu A
pseudo-slučajnim vrijednostima iz intervala [-125.5, 65.8]. U datoteku "out.txt" i na ekran ispisati
dio matrice , u matričnom obliku, koja se dobije tako da se izostavi prvi stupac i zadnji redak.
Datoteku "out.txt" treba kreirati iz programa. Datoteku "in.txt" kreirati na računalu pomoću
Notepad-a, te upisati dva cijela broja svaki u svoj red i spremiti sadržaj datoteke. Prilikom otvaranja
datoteke "in.txt" navesti apsolutnu putanju do sam datoteke.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"

int main()
{
	int num1, num2;
	FILE* fp = NULL;
	float** p;


	srand((unsigned)time(NULL));

	fp = fopen("in.txt", "r");

	if (fp == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}
	num1 = ucitavanje(fp);
	num2 = ucitavanje(fp);

	fclose(fp);

	p = zauzimanje(num1, num2);

	if (p == NULL) {
		return 1;
	}

	generiranje(num1, num2, p);
	ispis(num1, num2, p);

	//DRUGI DIO
	FILE* fp1 = NULL;

	fp1 = fopen("out.txt", "w");

	if (fp1 == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}

	ispis2(num1, num2, p, fp1);

	fclose(fp1);

	return 0;
}
