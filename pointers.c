#include <stdio.h>
#include <string.h>

int main(){
    int i = 50;
    int *p;
    p = &i;
    
    printf("i variable value is %d\n", i);
    printf("i variable address is %p\n", &i);
    printf("p pointer value is %p\n", p);
    printf("p pointer points to value %d\n", *p);

    return 0;
}