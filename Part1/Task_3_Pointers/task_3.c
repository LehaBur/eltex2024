#include <stdio.h>
#define SIZE 10

void point_array()
{
    int array[SIZE];
    int *p_array = &array[0];

    for (int i = 0; i <= SIZE - 1; i++)
    {
        array[i] = i + 1;
    }

    for (int j = 0; j <= SIZE - 1; j++)
    {
        printf("%d ", *p_array);
        p_array++;
    }

    printf("\n");
}

int main()
{
    point_array();
}
