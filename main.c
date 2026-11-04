#include <stdio.h>

int main(void)
{
    int input,x;
    scanf("%d", &input);
    x = input;
    if (0<=x&&10<x)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
