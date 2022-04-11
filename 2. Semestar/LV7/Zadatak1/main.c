/*Napisati C program koji će pročitati cijeli broj iz datoteke "dat.txt" i toliko puta tražiti unos imena i
prezimena studenta sa standardnog ulaza. Sva učitana imena i prezimena zapisati u datoteku
"studenti.txt" koju je potrebno kreirati iz programa i to tako da zapis bude u formatu: "Student
broj: %d.\tIme: %s\t Prezime: %s\n", svaki zapis u novi red. Datoteku "dat.txt" kreirati na računalu
pomoću Notepad-a, te upisati cijeli broj i spremiti sadržaj datoteke. Prilikom otvaranja datoteke
"dat.txt" navesti apsolutnu putanju do sam datoteke.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "header.h"

int main(void) {
	int num;
	//PRVI DIO

	FILE* fp = NULL;

	fp = fopen("datoteka.txt", "r");

	if (fp == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}

	num = ucitavanje(fp);
	fclose(fp);

	//DRUGI DIO


	FILE* fp1 = NULL;



	fp1 = fopen("studenti.txt", "w");
	if (fp1 == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}

	upis(fp1, num);

	fclose(fp1);

	return 0;
}
