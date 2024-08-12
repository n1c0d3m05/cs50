#include <stdio.h>

int main(int argc, char const *argv[]){

    int count=0;
    int nums[] = {0,3,2,4,5,7,8,1,9};
    while (count != 9)
    {
        if (nums[count] != count)
        {
            nums[count] = count;
        }
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%i\n", nums[count]);
    }
    
    return 0;
}