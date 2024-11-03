#include <stdio.h>

int main() 
{
    int matrix[3][3] = 
	{
        {10, 20, 30},
        {5, 15, 25},
        {1, 2, 3}
    };
    
	int rows = 3, cols = 3;
    int saddlePoint = -1;

    for (int i = 0; i < rows; i++) 
	{
        int minRow = matrix[i][0];
        int colIndex = 0;

        for (int j = 1; j < cols; j++) 
		{
            if (matrix[i][j] < minRow) 
			{
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for (int k = 0; k < rows; k++)
		{
            if (matrix[k][colIndex] > minRow) 
			{
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) 
		{
            saddlePoint = minRow;
            printf("Saddle point found: %d\n", saddlePoint);
            return 0;
        }
    }

    if (saddlePoint == -1) 
	{
        printf("No saddle point found.\n");
    }

    return 0;
}
