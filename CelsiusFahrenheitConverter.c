#include <stdio.h>

/*
    print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
*/
void main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    while(fahr <= upper){
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    celsius = 0.0;
    upper = 100;
    printf("\nCelsius-Fahrenheit table\n");
    while (celsius <= upper){
        fahr = (9 * celsius + 160) / 5;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + 10;
    }
}