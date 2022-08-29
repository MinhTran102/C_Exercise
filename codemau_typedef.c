#include<stdio.h>
typedef int * iptr;

int main()
{
    int a = 99;
    iptr p; //same as int *p
    p= &a;
    printf("%u\n", p);
    printf("%d\n", *p);
    return 0;
}