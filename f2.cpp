#include <stdio.h>

int main()
{
    int x = 1, sum = 0;

    //In the while loop, the condition of x less than or equal to 500 will be evaluated repeatedly and the body part of the loop will be executed till the value of x gets exceed to 500.

    while (x <= 500)
    {

        sum = sum + x;
        x++;
    }

    // Here comes the final answer that is the sum of numbers ranging from 1 to 500.

    printf("%d", sum);
    return 0;
}