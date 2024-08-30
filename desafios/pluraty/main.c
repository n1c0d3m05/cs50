#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

int main(int argc, const char *argv[])
{
    if(argc > MAX + 1){
        printf("erro aceitamos somente 9 canditaos");
        return 1;
    }

    

    // criando um "objeto" que representa os canditatos
    typedef struct 
    {
        string nome;
        int votos;
    }Canditatos;
    


    // array de canditatos
    Canditatos canditatos[MAX];


    return 0;
}