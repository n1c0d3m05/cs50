#include <stdio.h>
#include <cs50.h>

void draw(int h){

    if (h <= 0)
    {
        return;
    }
    
    draw(h - 1);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int h = get_int("h: ");
    draw(h);
    return 0;
}

