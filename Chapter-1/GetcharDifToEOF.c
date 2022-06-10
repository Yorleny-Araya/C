#include <stdio.h>

int main()
{
    int c;
    int a;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        a = (c != EOF);
        printf("\n%d\n", a);
    }
    a = (c != EOF);
    printf("\n%d\n", a);
}