#include <stdio.h>

void reverse_array_N()
{
    int size = 0;
    printf("Введите размер массива: ");
    scanf("%d", &size);

    int Array[size];

    printf("Введите %d элементов массива: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("Массив в обратном порядке: ");
    for (int j = size - 1; j >= 0; j--)
    {
        printf("%d ", Array[j]);
    }
    printf("\n");
}

int main()
{
    reverse_array_N();
}
