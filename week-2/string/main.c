#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    string s = get_string("input: ");
   
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        printf("%c ", s[i]);
    }
    return 0;
}
