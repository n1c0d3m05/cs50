#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(int argc, int argv[]){

    typedef struct {
        string nome;
        string number; 
    }  person; 

    person pessoas[3];

    pessoas[0].nome = "nicolas";
    pessoas[0].number = "+11 84930129-438940";

    pessoas[1].nome = "roberto";
    pessoas[1].number = "+11 84930129-658940";

    pessoas[2].nome = "lucas";
    pessoas[2].number = "+11 84930129-718940";

    string s = get_string("string: ");
    for (size_t i = 0; i < 3; i++)
    {
        if (strcmp(pessoas[i].nome, s) == 0)
        {
            printf("achei\nnumero: %s", pessoas[i].number);
            return 0;
        }
        
    }
    printf("=(");
    return 1;

    return 0;
}
