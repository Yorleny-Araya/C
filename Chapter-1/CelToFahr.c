#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 40;
    step = 15;

    celsius = lower;

    printf("Celsius\tFahr\n");
    while(celsius <= upper){
        fahr = (celsius*1.8) +32;
        printf("%2.1F\t%2.1F\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}