#include<stdio.h>
int main()
{
    int a = 3;
    int b = 0;
    
    printf("%d || %d = %d\n", a, b, a || b);
    printf("%d && %d = %d\n", a, b, a && b);
    printf("%d\n", !b);
    return 0;
}