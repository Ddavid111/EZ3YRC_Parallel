#include <stdio.h>
#include <stdlib.h>
#define randnum(min, max) \
((rand() % (int)(((max) + 1) - (min))) + (min))

int main()
{
    int a = 0;
    int b = 0;
    do
    {
    printf("Add meg az a erteket: ");
    scanf("%d", &a);
    printf("Add meg a b erteket: ");
    scanf("%d", &b);
    //printf("Az altalad meg adott ertekek = %d, %d \n", &a, &b);
    if(a > b)
    {
    printf("Az a ertekenek kisebbnek kell lennie mint a b ertekenek!\n");
    }
    }while(a > b);
    srand(time(NULL));
    printf("A random ertek a ket ertek kozott: %d\n", randnum(a, b));

    printf("\n");




    return 0;
}
