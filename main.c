#include <stdio.h>

int main(void)
{
    int input,x;
    scanf("%d", &input);
    x = input;
    if (0<=x&&x<10)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0 ;
}
