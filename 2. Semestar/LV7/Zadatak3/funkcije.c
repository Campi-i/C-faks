#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"

void pretvorba(FILE* fp, FILE* fp1) {
	char c;

	while ((c = fgetc(fp)) != EOF) {
		
		if ((c >= 'A') && (c <= 'Z')) {
			c += 32;
		}
		
		else if ((c >= 'a') && (c <= 'z')) {
			c -= 32;
		}

		fputc(c, fp1);

	//	fprintf(fp1, "%c", c);
	}
}
