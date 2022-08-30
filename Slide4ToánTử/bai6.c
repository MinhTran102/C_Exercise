//Chia hai số nguyên
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Nhap 2 so nguyen:\n");
    scanf("%d %d", &a, &b);
    float e = a / (float)b;
    printf("Thuong cua 2 so %d và %d: %f", a, b, e);
    return 0;
}