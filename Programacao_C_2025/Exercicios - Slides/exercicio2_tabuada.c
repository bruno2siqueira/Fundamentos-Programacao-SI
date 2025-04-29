// motrar dados de uma tabuada do 1 ao 9.
#include <stdio.h>

int main()
{
    int x = 0;
    int y = 1;
    while (x <= 9)
    {
        while (y <= 9)
        {
            printf("%d * %d = %d \n", x, y, x * y);
            y++;
        }
        x++;
        y = 1;
        printf("\n");
    }

    return 0;
}