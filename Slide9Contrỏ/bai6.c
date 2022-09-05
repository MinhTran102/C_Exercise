//Viết hàm cộng 2 số bằng con trỏ và gọi ra sử dụng ở int main.
#include<stdio.h>
int main() 
{
    system("cls");
    hienThi();
    return 0;
}
void hienThi ()
{
    int a,b;
    printf("Nhap hai so can tinh tong: \n");
    scanf("%d %d", &a, &b);
    int *pnum1 = &a;
    int *pnum2 = &b;
    printf("Tong 2 so la: %d", *pnum1 + *pnum2);
}