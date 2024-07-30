#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Verificar se o número de argumentos é correto
    if (argc != 2)
    {
        printf("usage: ./main key\n");
        return 1;
    }

    // Pegar a chave e o texto
    int key = atoi(argv[1]);
    string text = get_string("texto: ");

    // Passar pelo texto
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if ((c >= 'A' && c <= 'Z'))
        {
            // Transcrição para letras maiúsculas
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        else if ((c >= 'a' && c <= 'z'))
        {
            // Transcrição para letras minúsculas
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else
        {
            // Manter outros caracteres
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}