#include <stdio.h>

void snail_square_matrix_N()
{
    int size = 0;
    printf("Введите размер матрицы: ");
    scanf("%d", &size);

    int Array[size][size];
    int count = 1;
    int iterator = 0;

    while (count <= size * size)
    {
        for (int cols = iterator; cols < size - iterator; cols++)
        {
            Array[iterator][cols] = (count);
            count++;
        }
        for (int rows = iterator + 1; rows < size - iterator; rows++)
        {
            Array[rows][size - 1 - iterator] = (count);
            count++;
        }
        for (int cols = size - 2 - iterator; cols >= iterator; cols--)
        {
            Array[size - 1 - iterator][cols] = (count);
            count++;
        }
        for (int rows = size - 2 - iterator; rows > iterator; rows--)
        {
            Array[rows][iterator] = (count);
            count++;
        }
        iterator++;
    }

    printf("Квадратная матрица со стороной %d:\n", size);
    for (int rows = 0; rows < size; rows++)
    {
        for (int cols = 0; cols < size; cols++)
        {
            printf("%d\t", Array[rows][cols]);
        }
        printf("\n");
    }
}

int main()
{
    snail_square_matrix_N();
}
