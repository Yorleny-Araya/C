#include <stdio.h>

int main()
{
    int blk;
    int c;
    int flag;

    blk = 0;
    c = 0;
    flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' '){
            if (flag == 1){
                flag = 0;
                printf(" ");
            }
            putchar(c);
        }
        else if (c == ' '){
            if (flag == 0){
                flag = 1;
            }
        }
    }
}