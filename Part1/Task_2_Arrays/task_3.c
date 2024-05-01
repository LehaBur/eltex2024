#include <stdio.h>

void triangular_matrix_N()
{
    int size = 0;
    printf("Введите размер матрицы: ");
    scanf("%d", &size);

    int Array[size][size];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        count = size - 1 - i;
        for (int j = 0; j < size; j++)
        {
            if (count > 0)
            {
                Array[i][j] = 0;
                count--;
            }
            else
            {
                Array[i][j] = 1;
            }
        }
    }

    printf("Треугольная матрица со стороной %d:\n", size);
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
    triangular_matrix_N();
}
