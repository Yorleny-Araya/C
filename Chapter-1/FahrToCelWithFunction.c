#include <stdio.h>

int farhToCel(int lower, int upper, int step);

int main()
{
    farhToCel(0, 300, 20);

    return 0;
}

int farhToCel(int lower, int upper, int step)
{
    float fahr, celsius;

    fahr = lower;

    printf("Fahr\tCelsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0)* (fahr -32.0);
        printf("%3.0F\t %6.1F\n", fahr, celsius);
        fahr = fahr + step;
    }
}