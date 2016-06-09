#include <stdio.h>

#define MAX 100

void Input(int a[][MAX], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("\nInput element[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

int FindMax(int a[][MAX], int row, int col)
{
	int max = a[0][0];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

void Output(int a[][MAX], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int a[MAX][MAX];
	int row, col;
	printf("\nInput row: ");
	scanf("%d", &row);
	printf("\nInput colume: ");
	scanf("%d", &col);
	
	Input(a, row, col);
	Output(a, row, col);
	printf("\nMax: %d", FindMax(a, row, col));
	
	return 0;
}