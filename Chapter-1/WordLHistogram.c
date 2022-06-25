#include <stdio.h>

void main ()
{
    int length[10];
    int i, h, c, inword;

    i = 0;
    c = 0;
    inword = 0;

    for(h = 0; h < 10; ++h){
        length[h] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if(c != ' ' && c != '\t' && c != '\n'){
            inword = 0;

            i = i + 1;
            
        }
        else if (inword == 0){
            inword = 1;
            if (i > 10) {
                i = 10;
            }
            length[i-1] = length[i-1] + 1;
            i = 0;
        }
    }
    if(inword == 0){
        if (i > 10) {
            i = 10;
        }
        length[i-1] = length[i-1] + 1;
    }
        

    int j = length[9];
    int k;
    for (k = 0; k < 10; ++k){
        if (length[k] > j)
        {
            j = length[k];
        }
    }

    int m, n, o, p;
    n = 0;
    o = j;
    p = j;
    while(j > 0) {
        for (m = 0; m < 10; ++m){
            if (length[n] < o){
                printf("   ");
            }
            else if (length[n] >= o && o != 0) {
                printf(" * ");
            }
            ++n;
        }
        printf("\n");
        n = 0;
        --o;
        --j;
    }

    for (m = 0; m < 10; ++m){
            printf(" - ");
    }
    printf("\n");
    for (m = 0; m < 9; ++m){
            printf(" %d ", m+1);
    }
    printf(" %d+ \n", m+1);
}

    
