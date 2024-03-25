#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// void main(){
//     int num = 0xFFFF00FF;
//     char *bite = &num;
//     bite ++;
//     *bite = 0xAA;
//     printf("%X", num);

// }

void decToBinary(int n)
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

void put_in_third_byte() // 1 задание
{
    int number = 0;
    printf("Введите число: ");
    scanf("%d", &number);
    char *p_number = &number;
    int second_number = 0;
    printf("Введите второе число: ");
    scanf("%d", &second_number);
    printf("%d\n", number);
    p_number += 2;
    *p_number = second_number;
    p_number -= 2;
    printf("%d\n", number);
    decToBinary(number);
}

void code(void) // 2 задание
{
    float x = 5.0;
    printf("x = %f, ", x);
    float y = 6.0;
    printf("y = %f\n", y);
    float *xp = &y; // TODO: отредактируйте эту строку, и только правую часть уравнения
    float *yp = &y;
    printf("Результат: %f\n", *xp + *yp);
}

void point_array() // 3 задание
{
    int array[9];
    int *p_array = &array[0];
    for (int i = 0; i <= 9; i++)
    {
        array[i] = i + 1;
    }
    for (int j = 0; j <= 9; j++)
    {
        printf("%d ", *p_array);
        p_array++;
    }
    printf("\n");
}

bool string_comparison(char *p_string, char *p_substring)
{
    bool flag = false;
    while (*p_string == *p_substring)
    {
        p_string++;
        p_substring++;
    }
    if (*p_substring == '\0')
    {
        flag = true;
    }
    return flag;
}

void point_string() // 4 задание
{
    int pointer = 0;
    bool flag = false;
    static char string[100];
    static char substring[100];
    printf("Введите строку: ");
    scanf("%s", string);
    printf("Введите подстроку: ");
    scanf("%s", substring);
    char *p_string = &string;
    char *p_substring = &substring;
    while (*p_string != '\0')
    {
        if (*p_string == *p_substring)
        {
            flag = string_comparison(p_string, p_substring);
        }
        if (flag == true)
        {
            pointer = p_string;
            break;
        }
        p_string++;
    }
    printf("%p\n", pointer);
}

int main()
{
    // put_in_third_byte();
    // code();
    // point_array();
    point_string();
}
