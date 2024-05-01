#include <stdio.h>

void decToBinary(int n) // найденная в инете функция
{
    int binaryNum[32]; // Массив для хранения двоичного числа
    int i = 0;

    // Записываем двоичное представление в массив
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Выводим двоичное представление
    for (int j = i - 1; j >= 0; j--)
    {
        if (!((j + 1) % 8) && (j < 31))
        {
            printf(" ");
        }
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

void put_in_third_byte()
{
    int number = 0;
    printf("Введите число: ");
    scanf("%d", &number);
    char *p_number = &number;

    int second_number = 0;
    printf("Введите второе число: ");
    scanf("%d", &second_number);

    p_number += 2;
    *p_number = second_number;
    p_number -= 2;

    printf("Число после изменения: %d\nТо же число в двоичном виде: ", number);

    decToBinary(number);
}

int main()
{
    put_in_third_byte();
}
