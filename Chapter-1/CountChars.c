#include <stdio.h>

int main()
{
    int blk;
    int tab;
    int nl;
    int c;

    blk = 0;
    tab = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' '){
            blk = blk + 1;
        }
        else if (c == '\t'){
            tab = tab + 1;
        }
        else if (c == '\n'){
            nl = nl + 1;
        }
    }

    printf("Blancos: %d\nTabs: %d\nNueva Línea: %d\n", blk, tab, nl );
}

