#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    printf("int: %i\n", sizeof(int));
    printf("char: %i\n", sizeof(char));
    printf("float: %i\n", sizeof(float));
    printf("double: %i\n", sizeof(double));
    printf("long: %i\n", sizeof(long));
    printf("char[](string): %i\n", sizeof(char[13]));
    printf("boolean: %i\n", sizeof(bool));

    return 0;
}
