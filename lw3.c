#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, c, a = 1, k = 1;
    int storagex, storagey;
    double power;
    while (c = a)
    {
        printf("Input x: ");
        scanf("%d", &x);
        printf("Input y: ");
        scanf("%d", &y);
        if (x * y >= 0)
        {
            storagex = x;
            storagey = y;
        }
        else
        {
            if ((storagex * storagey) % 2 == 0)
            {
                for (c = 1; c <= storagey; c++)
                {
                    k = k * c;
                }
                printf("F is equal to: y!, F = %d", k);
                a = 0;
            }
            else{
                power = pow(3,storagex);
                printf("F = 3^x, F = %lf",power);
                a = 0;
            }
            
            
        }
    }
    return 0;
}