#include <stdio.h>

int main() 
{
    int matrixA[3][3], matrixB[3][3], product[3][3];
    
    printf("Enter elements of Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("Enter elements of Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            for (int k = 0; k < 3; k++) 
			{
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Resultant Matrix after multiplication:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
