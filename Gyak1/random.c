#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(1000);
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (1000 - 500) + 500;
        printf("%d ", array[i]);
    }





    return 0;
}