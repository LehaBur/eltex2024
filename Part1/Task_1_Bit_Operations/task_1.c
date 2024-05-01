#include <stdio.h>

void bit()
{
    int number = 0;
    while (number < 1)
    {
        printf("Введите целое положительное число: ");
        scanf("%d", &number);
    }
    printf("Ваше число в двоичном виде:");
    for (int i = 31; i >= 0; i--)
    {
        if (!((i + 1) % 8) && (i < 31)) // для красивого вывода
        {
            printf(" ");
        }
        if ((number >> i) & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    bit();
}
