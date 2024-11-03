#include <stdio.h>

int main() 
{
    int start;

    printf("Enter the odd number: ");
    scanf("%d", &start);

    if (start % 2 == 0) {
        printf("Invalid! Please enter an odd number.\n");
        return 1;
    }

    for (int i = start; i > 0; i -= 2) 
	{  
        for (int j = start; j >= i; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
