#include <stdio.h>

int main ()
{
	int i, j, rows = 3, cols = 3;
	int matrix[3][3] = 
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int transpose[3][3];
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	
	printf("The tranpose matrix is:\n");
	for (i = 0; i < cols; i++)
	{
		for (j = 0; j < rows; j++)
		{
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
    }
    return 0;
}