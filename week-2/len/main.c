#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    
    string nome = get_string("coloque seu nome: ");
    
    // ultimo caracter de um array string

    printf("seu nome tem %i", strlen(nome));

    return 0;
}

