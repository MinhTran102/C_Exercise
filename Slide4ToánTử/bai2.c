//Đặt bit thứ 5 thành giá trị 1
#include<stdio.h>
int main()
{
    unsigned int a;
    unsigned int b;
    printf("Nhap so doi bit thu 5: \n");
    scanf("%o", &a);
    b=a>>2;
    printf("%o", b);
    return 0;
}