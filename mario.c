#include <cs50.h>
#include <stdio.h>

int main(void)  
{
    int height, l, s, h;

    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    for (l = 1; l <= height; l++)
    {
      
        for (s = 0; s < (height - l); s++)
        {
            printf(" ");
        }

        
        for (h = 0; h < l; h++)
        {
            printf("#");
        }

        printf("  ");

        printf("\n");
    }

    return 0;
}