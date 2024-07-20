#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    string nome = get_string("qual seu nome: ");
    int idade = get_int("qual sua idade: ");

    printf("oi %s\n", nome);
    printf("sua idade: %i\n", idade);
    
    return 0;
}
