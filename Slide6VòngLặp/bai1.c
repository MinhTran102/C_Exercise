/*Đọc một số tự nhiên được nhập từ bàn phím. Hiển thị tất cả những số chẵn từ 1
đến số đã cho. */
#include <stdio.h>
int main()
{
    unsigned int a;
    int i=1;
    printf("Nhap vao so tu nhien can kiem tra: \n");
    scanf("%d", &a);
    for (i; i<=a; i++) {
        if (i%2==0) {
            printf("%d ", i);
        }
    }
    return 0;
}