/*Napisati C program koji će pročitati cijeli broj iz datoteke "dat.txt" i toliko puta tražiti unos imena i
prezimena studenta sa standardnog ulaza. Sva učitana imena i prezimena zapisati u datoteku
"studenti.txt" koju je potrebno kreirati iz programa i to tako da zapis bude u formatu: "Student
broj: %d.\tIme: %s\t Prezime: %s\n", svaki zapis u novi red. Datoteku "dat.txt" kreirati na računalu
pomoću Notepad-a, te upisati cijeli broj i spremiti sadržaj datoteke. Prilikom otvaranja datoteke
"dat.txt" navesti apsolutnu putanju do sam datoteke.
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int numb;
    char ime[20] = { '\0' };
    char prezime[20] = { '\0' };
    int status = 0;

    FILE *fp = NULL;

    fp = fopen("D:\\C-zadatci\\LV6\\Zadatak1\\Zadatak1\\Zadatak1.txt", "r");

    if (fp == NULL){
        printf("Datoteka ne postoji");
    }
    else{
        printf("Datoteka postoji");
    }

    fscanf(fp, "%d", &numb);
    printf("\n%d   \n", numb);
    fclose(fp);

    //DRUGI DIO
    FILE *fp1 = NULL;

    fp1 = fopen("D:\\C-zadatci\\LV6\\Zadatak1\\Zadatak1\\Studenti.txt", "w");

    upis(fp1, numb);

    fclose(fp1);


    return 0;
}
