#include <stdio.h>

void main ()
{
    int chars[27];
    int h, i, j, k, n, c;

    i = 0;
    c = 0;
    k = 0;

    for(h = 0; h < 27; ++h){
        chars[h] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if  (c >= 'a' && c <= 'z') {
            c -= ('a' - 'A');
        }
        
        if(c >= 'A' && c <= 'Z')
        {
            i = c - 'A';
            chars[i] = chars[i] + 1;
        }
    }

    for(h = 0; h < 27; ++h){
        if(k < chars[h]){
            k = chars[h];
        }
    }

    j = 0;
    n = k;
    while(j <= k)
    {
        for(h = 0; h < 27; ++h){
            if(n >= chars[h]){
                printf("   ");
            }
            else { 
                printf(" * ");
            }
        }
        printf("\n");
        n--;
        j++;   
    }

    int m;
    m = 'A';
    while(m >= 'A' && m <= 'Z'){
        printf(" %c ", m);
        m++;
    }

    printf("\n");
    
}