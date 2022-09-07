// tính kích thước con trỏ các kiểu dữ liệu
#include<stdio.h>
int main()
{
    int a = 10;
    int *pa = &a;
    printf("Kich thuoc con tro kieu int: %d", sizeof(pa));

    char b;
    char *pb = &b;
    printf("Kich thuoc con tro kieu char: %d", sizeof(pb));
    return 0;
}