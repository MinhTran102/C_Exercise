#include<stdio.h>
int main()
{
    char a[30];
    char b[30];
    int c;
    printf("Hay nhap ten: ");
    scanf("%s", &a);
    printf("Hay nhap ngay sinh: ");
    scanf("%s", &b);
    printf("Hay nhap so dien thoai: ");
    scanf("%d", &c);
    printf("NAME: %s\n", a);
    printf("DOB: %s\n", b);
    printf("Number: %d", c);
    return 0;
}