#include <cs50.h>
#include <stdio.h>


long soma(long x, long y){
    return x + y;
}
long sub(long x, long y){
    return x - y;
}
long mult(long x, long y){
    return x * y;
}
long div(long x, long y){
    return x / y;
}

int main(int argc, char const *argv[])
{
    long x = get_long("me fale um numero: ");
    long y = get_long("me fale outro numero: ");

    int esc = get_int("qual operacao voce quer?\n1-soma\n2-subtrair\n3-multiplicacao\n4-divisao\nresposta: ");

    switch (esc){
    case 1:
        printf("%i\n", soma(x, y));
        break;
    case 2:
        printf("%i\n", sub(x, y));
        break;
    case 3:
        printf("%i\n", mult(x, y));
        break;
    case 4:
        printf("%i\n", div(x, y));
        break;
    default:
        printf("valor invalido");
        break;
    }
    return 0;
}
