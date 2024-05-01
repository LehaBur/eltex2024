#include <stdio.h>

void bit()
{
    int number = 0;
    int count = 0;
    while (number < 1)
    {
        printf("Введите целое положительное число: ");
        scanf("%d", &number);
    }
    for (int i = 31; i >= 0; i--)
    {
        if ((number >> i) & 1)
        {
            count++;
        }
    }
    printf("Количество едениц в двоичном виде вашего числа: %d\n", count);
}

int main()
{
    bit();
}
