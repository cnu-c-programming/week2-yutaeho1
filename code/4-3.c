#include <stdio.h>

int main()
{
    int a, f = 1;
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            printf("false\n");
            int f = 0;
            break;
        }

    }

    if (f == 1)
    {
        printf("true\n");
    }
    return 0;
}

