#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(1000);
    int a;
    int b;


    printf("Adja meg az also es felso hatart: ");
    scanf("%d %d",&a &b);
    printf("%d %d",&a &b);

    
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (b - a) + a;
        printf("%d ", array[i]);
    }





    return 0;
}