#include <stdio.h>
#include <string.h>

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

void put_in_third_byte(int number) // 1 задание
{
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

void point_string()
{
    char *string;
    char *substring;
    printf("Введите строку: ");
    scanf("%s", string);
    printf("Введите подстроку: ");
    scanf("%s", substring);
    while (*string != '\0')
    {
        if (*string == *substring)
        {
            while ((*substring != '\0') && (*string == *substring))
            {
                string++;
                substring++;
            }
            
        }
        
    }
}

int main()
{
    // int N = 0;
    // printf("Введите число: ");
    // scanf("%d", &N);
    // put_in_third_byte(N);
    // code();
    point_array();
}
