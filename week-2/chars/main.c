#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    //char Hi[3] = {'a', 'b', 'c', 'd', };
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i', 'j', 'k', 'l', 'm', 'n', 'o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int i = 0; i < 26; i++)
    {
        printf("%i  ", alphabet[i]);
    }
    
    
    return 0;
}
