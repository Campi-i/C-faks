/*Napisati C program koji kopira sadržaj jedne tekstualne datoteku u drugu pri čemu se mijenjaju
mala slova u velika.Datoteka iz koje se kopira sadržaj zove se "prva.txt" i pripremljena je samo za
čitanje.Datoteku pod imenom "druga.txt" potrebno je kreirati iz programa i u nju se zapisuje
sadržaj iz datoteke "prva.txt".Datoteku "prva.txt" kreirati na računalu pomoću Notepad - a, te
upisati generirani sadržaj sa stranice https ://baconipsum.com/, te spremiti sadržaj datoteke.
Prilikom otvaranja datoteke "prva.txt" navesti apsolutnu putanju do sam datoteke.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"

int main(void) {
	//PRVI DIO
	FILE* fp = NULL;

	fp = fopen("prva.txt", "r");

	if (fp == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}


	//DRUGI DIO

	FILE* fp1 = NULL;
	
	fp1 = fopen("druga.txt", "w");

	if (fp1 == NULL) {
		printf("Datoteka ne postoji");
		return 1;
	}

	else {
		printf("Datoteka postoji\n");
	}

	pretvorba(fp, fp1);

	fclose(fp1);
	fclose(fp);
	return 0;
}
