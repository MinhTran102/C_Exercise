//Đổi số phút sang đơn vị năm và ngày
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Nhap so phut: \n");
    scanf("%d", &a);
    double e;
    e = a/1440;
    b = (int) e;
    printf("Ngay: %d\n", b);
    e = a/(365*1440);
    b = (int) e;
    printf("Nam: %d", b);
    return 0;
}