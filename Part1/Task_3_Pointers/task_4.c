#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100

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
    int *pointer = NULL;
    bool flag = false;

    static char string[SIZE];
    static char substring[SIZE];

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

    printf("Адресс начала строки: %p\nАдрес встреченной подстроки в данной строке: %p\n", string, pointer);
}

int main()
{
    point_string();
}
