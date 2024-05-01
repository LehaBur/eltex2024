#include <stdio.h>

void square_matrix_N()
{
    int size = 0;
    printf("Введите размер матрицы: ");
    scanf("%d", &size);

    int Array[size][size];
    int count = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            Array[i][j] = (count);
            count++;
        }
    }

    printf("Квадратная матрица со стороной %d:\n", size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", Array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    square_matrix_N();
}
