#include <stdio.h>

int main() 
{
    int matrix[2][3][3] = 
	{
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }
    };

    int sum = 0;
    int sumPageA = 0;
    int sumPageB = 0;

    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{     
            for (int k = 0; k < 3; k++) 
			{
                sum += matrix[i][j][k];
            }
        }
        if (i == 0) 
		{
            sumPageA = sum;
        } 
		else 
		{
            sumPageB = sum;
        }
    }

    printf("Sum of elements on Page 1: %d\n", sumPageA);
    printf("Sum of elements on Page 2: %d\n", sumPageB);

    return 0;
}
