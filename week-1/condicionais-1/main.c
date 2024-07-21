#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    char c = get_char("voce concorda?: ");

    if (c == 's' || c == 'S'){

        printf("concorda");

    }else if (c == 'n' || c == 'N'){

        printf("nao concorda");

    }else{
        printf("caracter invalido");
    }
    
    
    return 0;
}
