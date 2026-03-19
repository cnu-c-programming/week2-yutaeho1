#include <stdio.h>

int main()
{
    int a, b;
    char op;
    int result;

    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b != 0)
                result = a / b;
            else {
                printf("0으로 나눌 수 없습니다.\n");
                return 1;
            }
            break;
        default:
            printf("잘못된 연산자입니다.\n");
            return 1;
    }

    printf("%d\n", result);
    return 0;
}

