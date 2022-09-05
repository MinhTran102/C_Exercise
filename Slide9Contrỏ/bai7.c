//Viết hàm hoán đổi 2 số sử dụng con trỏ và gọi ở int main.
#include<stdio.h>
int main() 
{
    system("cls");
    hienThi();
    return 0;
}
void hienThi ()
{
    int a,b,c;
    printf("Nhap so thu nhat: \n");
    scanf("%d", &a);
    printf("Nhap so thu hai: \n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("So thu nhat da hoan doi: %d\n", a);
    printf("So thu hai da hoan doi: %d", b);
}