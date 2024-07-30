#include <stdio.h>
#include <cs50.h>

const int N = 3;

float Media(int len, int array[]);

int main(int argc, char const *argv[])
{
    
    int score[N];

    for (int i = 0;i < N; i++)
    {
        score[i] = get_int("nota %i: ", i+1);
    }
    
    float media = Media(N, score);

    printf("%.2f", media);
    
    return 0;
}

float Media(int len, int array[]){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return (sum / (float) len);
}