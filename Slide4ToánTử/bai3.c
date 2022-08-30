//Đổi ngày thành năm, tuần
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Nhap so ngay: \n");
    scanf("%d", &a);
    double e;
    e = a/365;
    b = (int) e;
    printf("Nam: %d\n", b);
    e = a/7;
    b = (int) e;
    printf("Tuan: %d", b);
    return 0;
}