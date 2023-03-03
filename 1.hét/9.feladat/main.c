#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char str[100];
    int elemszam;


    printf("Adja meg a file nevet: ");

    scanf("%[^\n]s",str);

    printf("Adja meg az elemszamot: ");

    scanf("%d",&elemszam);

    clock_t begin_file = clock();
    FILE *filePointer ;

    filePointer = fopen(str,"w");

    srand(time(NULL));
    clock_t begin_randomszam = clock();
    for (int i = 0; i < elemszam; i++)
    {
        int szam = (rand() % (1000 - 500 + 1)) + 500;
        fprintf(filePointer,"%d ",szam);
    }
    clock_t end_randomszam = clock();

    fclose(filePointer);
    clock_t end_file = clock();

    double time_spent_randomszam = (double)(end_randomszam - begin_randomszam) / CLOCKS_PER_SEC;
    printf("Random szam generalassal eltoltott ido: %.2lf masodperc!",time_spent_randomszam);

    double time_spent_file = (double)(end_file - begin_file) / CLOCKS_PER_SEC;
    printf("File letrehozasaval eltoltott ido: %.2lf masodperc!",time_spent_file);
    return 0;
}

