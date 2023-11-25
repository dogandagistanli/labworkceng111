#include <stdio.h>
#include <math.h>
int main()
{
    int rownumber;
    int space;
    for (rownumber = 0; rownumber < 10; rownumber++)
    {
        for (space = 0; space <= rownumber - 1; space++)
            printf(" ");
        printf("***\n");
    }
    return 0;
}