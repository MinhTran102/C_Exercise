//Đặt bit thứ 5 thành giá trị 1
#include<stdio.h>
int main()
{
    int a;
    int b = 16;
    printf("Nhap so doi bit thu 5 thanh 1: \n");
    scanf("%d", &a);
    printf("So sau khi doi bit thu 5 thanh 1 : %d", a|b);
    return 0;
}