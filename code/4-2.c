#include <stdio.h>

int main()
{
    int count = 10;
    for (size_t i = 1; i < count; i++)
    {
        for (size_t j = 1; j < count; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        
    }
    return 0;
}

