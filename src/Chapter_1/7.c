#include <stdio.h>

int main(){

    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Размер int: %ld байт\n", sizeof(integerType));
    printf("Размер float: %ld байт\n", sizeof(floatType));
    printf("Размер double: %ld байт\n", sizeof(doubleType));
    printf("Размер char: %ld байт\n", sizeof(charType));

    return 0;
}