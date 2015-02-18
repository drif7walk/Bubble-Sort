#include <stdio.h>
#include <stdlib.h>

void sort(int* array, int sz)
{
    int i;
    unsigned char done = 0;
    int c;

    while (done != 1)
    {
        done = 1;
        for (i = 1; i < sz-1; i++)
        {
            if (array[i] < array[i-1])
            {
                done = 0;
                c = array[i];
                array[i] = array[i-1];
                array[i-1] = c;
            }
        }

    }
}

int main()
{
    /* Initialize */
    int sz = 10;
    int i;
    int* array = malloc(sz * sizeof(int));

    srand(time(NULL));

    /* Define values in array */
    for (i = 0; i < sz-1;i++)
        array[i] = rand() % 10;

    /* Display array before sorting */
    for (i = 0; i < sz-1; i++)
        printf("%i ", array[i]);

    printf("\r\n");
    sort(array, sz);

    /* Display array after sorting */
    for (i = 0; i < sz-1; i++)
        printf("%i ", array[i]);

    free(array);
    return 0;
}
