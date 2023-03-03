#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5

int main()
{

    srand(time(NULL));
    int min=500;
    int max=1000;

    int array[5];

    for(int i=0;i<5;i++)
    {
        array[i]= rand() % (max - min) + min;

        printf("%d\n",array[i]);

    }

    printf("\n");
    double array_sec[LENGTH];

    for(int j=0;j<5;j++)
    {
        array_sec[j]=((double)rand() % (max - min) + min);
        printf("%.2f\n",array_sec[j]);

    }




    return 0;
}
