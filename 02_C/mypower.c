#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x;
    double y;
    char yString[20] = {'\0'};
    char *ptr;
    if (scanf("%lf", &x) != 1)
    {
        printf("Usage: power num [num]");
    }
    else
    {
        fgets(yString, sizeof yString, stdin);
        if (yString[0] == '\n')
        {
            y = 2;
        }
        else
        {
            y = strtod(yString, &ptr);
            printf("%lf", y);
        }
        printf("%lf", pow(x, y));
    }
}