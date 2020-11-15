#include <stdio.h>

int main()
{
    int a, b;
    char c;

    while (1)
    {
        scanf("%d %c %d", &a, &c, &b);

        if (c == '+')
        {
            printf("%d¥n", a + b);
        }

        if (c == '-')
        {
            printf("%d¥n", a - b);
        }

        if (c == '*')
        {
            printf("%d¥n", a * b);
        }

        if (c == '/')
        {
            printf("%d", a / b);
        }
    }
    return 0;
}
