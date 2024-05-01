#include <stdio.h>

void put_in_third_byte()
{
    int first_number = 0;
    int second_number = 0;
    printf("Введите два целых положительных числа: ");
    scanf("%d %d", &first_number, &second_number);
    for (int i = 31; i >= 0; i--)
    {
        if (!((i + 1) % 8) && (i < 31))
        {
            printf(" ");
        }
        if ((i <= 23) && (i > 15))
        {
            if ((second_number >> (i - 16)) & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        else if ((first_number >> i) & 1)
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
    put_in_third_byte();
}
