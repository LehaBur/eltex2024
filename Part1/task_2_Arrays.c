#include <stdio.h>

// 1 задание
void square_matrix_N(int n)
{
	int Array[n][n];
	int count = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Array[i][j] = (count);
			count++;
		}
	}

	printf("Квадратная матрица со стороной %d:\n", n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", Array[i][j]);
		}
		printf("\n");
	}
}

// 2 задание
void reverse_matrix_N(int n)
{
	int Array[n];

	printf("Введите %d элементов массива: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &Array[i]);
	}

	printf("Массив в обратном порядке: ");
	for (int j = n - 1; j >= 0; j--)
	{
		printf("%d ", Array[j]);
	}
	printf("\n");
}

// 3 задание
void triangular_matrix_N(int n)
{
	int Array[n][n];
	int count = n - 1;

	for (int i = 0; i < n; i++)
	{
		count = n - 1 - i;
		for (int j = 0; j < n; j++)
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

	printf("Треугольная матрица со стороной %d:\n", n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", Array[i][j]);
		}
		printf("\n");
	}
}

// 4 задание
void snail_square_matrix_N(int size)
{
	int Array[size][size];
	int count = 1;
	// int size = 5;
	int iterator = 0;

	while (count <= size * size)
	{
		for (int cols = iterator; cols < size - iterator; cols++)
		{
			Array[iterator][cols] = (count);
			count++;
		}
		for (int rows = iterator + 1; rows < size - iterator; rows++)
		{
			Array[rows][size - 1 - iterator] = (count);
			count++;
		}
		for (int cols = size - 2 - iterator; cols >= iterator; cols--)
		{
			Array[size - 1 - iterator][cols] = (count);
			count++;
		}
		for (int rows = size - 2 - iterator; rows > iterator; rows--)
		{
			Array[rows][iterator] = (count);
			count++;
		}
		iterator++;
	}

	printf("Квадратная матрица со стороной %d:\n", size);
	for (int rows = 0; rows < size; rows++)
	{
		for (int cols = 0; cols < size; cols++)
		{
			printf("%d\t", Array[rows][cols]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("Введите N: ");
	scanf("%d", &n);
	// square_matrix_N(n);
	// reverse_matrix_N(n);
	// triangular_matrix_N(n);
	// snail_square_matrix_N(n);
}