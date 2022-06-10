#include <stdio.h>

int main ()
{
    int c;
    int flag;

    flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n'){
            if (flag == 1){
                flag = 0;
            }
            putchar(c);
        }
        else{
            if (flag == 0){
                flag = 1;
                printf("\n");
            }
        }
    }

}