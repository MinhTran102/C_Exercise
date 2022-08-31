/*Viết chương trình yêu cầu nhập số từ bàn phím để đoán số đã cho trước. Bắt nhập
đoán số cho đến khi số nhập vào trùng với số đã cho. Nếu số nhập vào trùng với số đã cho thì
hiển thị lời thông báo đã đoán đúng trên màn hình. */
#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap vao so de doan: \n");
    scanf("%d", &a);
    printf("Nhap vao so ban doan: \n");
    scanf("%d", &b);
    while (a!=b)
    {
        printf("So ban doan khong dung, moi ban doan lai: \n");
        scanf("%d", &b);
    }
    printf("Chuc mung ban da doan dung");
    return 0;
}