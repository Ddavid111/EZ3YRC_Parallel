#include <stdio.h>

int  primszamok(int also, int felso);

int main() {

    int also = 2;

    int felso;

    printf("Adja meg a felso hatart: ");
    scanf("%d",&felso);

    printf("Primek szama a [%d,%d] intervallumon: %d",also,felso,primszamok(also,felso));


    return 0;
}
int  primszamok(int also, int felso){
    int primek = 0;

    for (int i = also; i < felso; i++)
    {
        int valto = 0;
        for (int j = 2; j <= i / 2; ++j)
        {
            if(i % j == 0){
                valto = 1;
                break;
            }
        }
        if(valto == 0){
            primek += 1;
        }

    }



    return primek;
}
