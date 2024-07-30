#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    string s = get_string("input: ");
    printf("output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
       printf("%c", toupper(s[i]));
    }
    

    // for (int i = 0, n = strlen(s); i < n; i++)
    // {
    //     // se tiver entre os minusculos
    //     if(s[i] >= 'a' && s[i] <= 'z'){
    //         printf("%c", (char) ((int) s[i] - 32));
    //     }else if(s[i >= 'A' && s[i] <= 'Z' ]){
    //         printf("%c", (char) ((int) s[i] + 32));
    //     }
    // }


    return 0;
}
