#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    do {
        printf("Enter Height: ");
       scanf("%d", &height);
    }while (height < 1 || height >8);

    for (int k = 0; k < height; k++)
    {
        for (int c = 0; c < height; c++)
        {
            if (k + c < height - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }

    return 0;
}

