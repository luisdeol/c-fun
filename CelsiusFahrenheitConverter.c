#include <stdio.h>

/*
    print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
*/
void main(){
    /* FOR LOOP*/
    int fahr;
    printf("\nUsing For loop\n\n");
    printf("Fahrenheit-Celsius table\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
    
    int celsius;
    printf("\nCelsius-Fahrenheit table\n");
    for (celsius = 0; celsius <= 100; celsius = celsius + 10){
        printf("%3d %6.1f\n", celsius, (9.0 * celsius + 160)/5.0);
    }
    /* WHILE LOOP 

    printf("\nUsing While loop\n");
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
        fahr = (9.0 * celsius + 160.0) / 5.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + 10;
    }
    */
}