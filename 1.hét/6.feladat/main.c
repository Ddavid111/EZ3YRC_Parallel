#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

int main()
{
    clock_t begin, end;
    double time_spent;

srand(time(NULL));
int x = randnum(0, 100);
int y = randnum(0, 100);
int e = 0;

printf("%d + %d = ?", x, y);
begin = clock();
time_spent = (double)begin / CLOCKS_PER_SEC;

for(time_spent=0.0; time_spent<62000.0; time_spent++)
{
	printf("\nAdja meg az eredmenyt: ");
	scanf("%d", &e);

	if(x+y == e)
	{
		printf("Helyes eredmenyt adott meg.\n");
		break;
	}
    else
	{
		printf("Helytelen az on altal meg adott ertek.\n");
		break;
	}
}
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("A szamitas %lf mp-ig tartott.", time_spent);

printf("\n");




    return 0;
}
