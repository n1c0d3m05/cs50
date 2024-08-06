#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    int numbers[5] = {1, 20, 30, 10, 50};
    int n = get_int("numero: ");

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == n)
        {
            printf("=) \n");
            return 0;
        }
    }
    printf("=(\n");    
    return 0;
}
