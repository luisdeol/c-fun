#include <stdio.h>

/*
    print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
*/
void main(){

    /* SYMBOLIC CONSTANTS FOR FAHRENHEIT -> CELSIUS CONVERSION */
    #define LOWERFC 0
    #define UPPERFC 300
    #define STEPFC 20

    /* SYMBOLIC CONSTANTS FOR CELSIUS -> FAHRENHEIT CONVERSION */
    #define LOWERCF 0
    #define UPPERCF 100
    #define STEPCF 10

    /* BEGIN USING FOR LOOP EXAMPLE */
    int fahr;
    printf("\nUsing For loop\n\n");
    printf("Fahrenheit-Celsius table\n");
    for (fahr = LOWERFC; fahr <= UPPERFC; fahr = fahr + STEPFC){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
    
    int celsius;
    printf("\nCelsius-Fahrenheit table\n");
    for (celsius = LOWERCF; celsius <= UPPERCF; celsius = celsius + STEPCF){
        printf("%3d %6.1f\n", celsius, (9.0 * celsius + 160)/5.0);
    }
    /* END USING FOR LOOP EXAMPLE */

    /* BEGIN USING WHILE LOOP EXAMPLE

    printf("\nUsing While loop\n");
    float fahr, celsius;

    fahr = LOWERFC;
    printf("Fahrenheit-Celsius table\n");
    while(fahr <= UPPERFC){
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEPFC;
    }

    celsius = LOWERCF;
    printf("\nCelsius-Fahrenheit table\n");
    while (celsius <= UPPERCF){
        fahr = (9.0 * celsius + 160.0) / 5.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + STEPCF;
    }
     END USING WHILE LOOP EXAMPLE */
}