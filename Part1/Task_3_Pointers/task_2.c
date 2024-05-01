#include <stdio.h>

void code1(void)
{
    float x = 5.0;
    printf("x = %f, ", x);
    float y = 6.0;
    printf("y = %f\n", y);
    float *xp = &y; // TODO: отредактируйте эту строку, и только правую часть уравнения
    float *yp = &y;
    printf("Результат: %f\n", *xp + *yp);
}

void code2(void)
{
    float x = 5.0;
    printf("x = %f, ", x);
    float y = 6.0;
    printf("y = %f\n", y);
    float *xp = &x + 1; // TODO: отредактируйте эту строку, и только правую часть уравнения
    float *yp = &y;
    printf("Результат: %f\n", *xp + *yp);
}

int main()
{
    code1();
    code2();
}
