#include <stdio.h>
#include <string.h>
typedef long int li;

int valid_or_not(char unary[])
{
    int i = 0;
    while (unary[i])
    {
        if (unary[i] != '1')
        {
            return -1;
        }
        i++;
    }
    return 1;
}