#include <stdio.h>

int main()
{
    int height, i, j, k;
    char term;
    do
    {
        printf("Please select height (1 to 8):\n");
        scanf("%d", &height);
        
    }
    while (height < 1 || height > 8);
    
    for (i = 1; i <= height; i++)
    {
    
    // left side
        for (j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("#");
        }
    
    // gap
    printf("  ");
    
    // right side
    for (j = 1; j <= i; j++)
    {
        printf("#");
    }
    
    // next line
    printf("\n");
    }
    return (0);
}