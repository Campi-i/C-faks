#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void upis(FILE *fp1, int numb){
     char ime[20];
     char prezime[20];
     int status;
     for(int i = 0; i < numb; i++){
        printf("Unesite ime za %d. studenta: ", i + 1);
        scanf("%19s", ime);
        printf("Unesite prezime za %d. studenta: ", i + 1);
        scanf("%19s", prezime);

        status = fprintf(fp1, "Student broj: %d\tIme: %s \tPrezime: %s\n", i + 1, ime, prezime);
    }
}

