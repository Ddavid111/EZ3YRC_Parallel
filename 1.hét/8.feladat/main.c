#include <stdio.h>
#include <stdlib.h>
void egesz_kiir(int tomb[], int meret);
void long_kiir(long tomb[],int meret);
void float_kiir(float tomb[],int meret);
long int findSize(char file_name[]);
int main() {

    int meret = 10;
    int egesz_tomb[10] = {1,0,2,5,3,8,4,6,9,7};
    long long_tomb[10] = {1,0,2,5,3,8,4,6,9,7};
    float float_tomb[10] = {1,0,2,5,3,8,4,6,9,7};

    egesz_kiir(egesz_tomb,meret);
    printf("Kesz!\n");

    long_kiir(long_tomb,meret);
    printf("Kesz!\n");

    long_kiir(float_tomb,meret);
    printf("Kesz!\n");

    char file_name[] = { "egesz_kiir.txt" };
    long int res = findSize(file_name);
    if (res != -1)
        printf("Size of the file is %ld bytes \n", res);



   return 0;
}
void egesz_kiir(int tomb[],int meret){
    FILE *filePointer ;

    filePointer = fopen("egesz_kiir.txt","w");

    for (int i = 0; i < meret; i++)
    {
        fprintf(filePointer,"%d ",tomb[i]);
    }

    fclose(filePointer);
}
void long_kiir(long tomb[],int meret){
    FILE *filePointer ;

    filePointer = fopen("long_kiir.txt","w");

    for (int i = 0; i < meret; i++)
    {
        fprintf(filePointer,"%llu ",tomb[i]);
    }

    fclose(filePointer);
}
void float_kiir(float tomb[],int meret){
    FILE *filePointer ;

    filePointer = fopen("float_kiir.txt","w");

    for (int i = 0; i < meret; i++)
    {
        fprintf(filePointer,"%f ",tomb[i]);
    }

    fclose(filePointer);
}
long int findSize(char file_name[])
{
    FILE* fp = fopen(file_name, "r");


    if (fp == NULL) {
        printf("File Not Found!\n");
        return -1;
    }

    fseek(fp, 0L, SEEK_END);


    long int res = ftell(fp);


    fclose(fp);

    return res;
}
