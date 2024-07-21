#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    int x = get_int("me fale um numero: ");
    int y = get_int("me fale outro numero: ");

    if (x < y)
    {
        printf("%i < %i\n", x, y);
    }else if(x > y){
        printf("%i > %i\n", x, y);
    }else{
        printf("%i = %i", x,y);
    }
    
    
    return 0;
}
