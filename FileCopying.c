#include <stdio.h>

void main(){
    int c;

    c = getchar();
    while ((c = getchar()) != EOF){
        putchar(c);
    }
}