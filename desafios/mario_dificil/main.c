#include <stdio.h>
#include <cs50.h>
int main(int argc, char const *argv[])
{
    int j, i;
    int n;
    int espaces = 0;

    do
    {
        n = get_int("fale um numero maior que 0 e menor que 8: ");
    } while (n < 1 || n > 8);
    
    

    for (int i = 0; i < n; i++)          // Constrói as linhas
    {
        
        for (j = 0; j <= i; j++)      // Constrói as colunas
        {
            while (espaces < n-i)
            {
                printf(" ");
                espaces += 1;

            }
            
            printf("#");
        }

        printf("  ");

        for (int i = 0; i < j; i++)      // Constrói as colunas
        {
            printf("#");
        }
        printf("\n");
        espaces = 0;
    }


    
}
