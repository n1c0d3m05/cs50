#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char const argv[]){

    string Strings[] = {"nicolas", "carro", "caminhão", "controle"};
    string s = get_string("string: ");
    int result;
    for (int i = 0; i < 4; i++)
    {
        result = strcmp(Strings[i], s);
        if (result == 0)
        {
            printf("achei\n ");
            return 0;
        }
        
    }
    printf("=(\n");
    return 1;





    return 0;
}