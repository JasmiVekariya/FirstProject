/*
FILE           :  f2.cpp
PROJECT        :  Focused Assignment 2
PROGRAMMER     :  Jasmi Devjibhai Vekariya (8960251)
Student ID     :  Jvekariya0251@conestogac.on.ca
FIRST VERSION  :  01-25-2024
DESCRIPTION    :  This program delineates the code which displays an addition of numbers ranging from 1 to 500 by using while loop and arithmetic operators.
*/
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