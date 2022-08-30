//Tiền lương của nhân viên
#include<stdio.h>
int main()
{
    unsigned int id, gio, tien, luong;
    printf("Nhap ID nhan vien: \n");
    scanf("%u", &id);
    printf("Nhap so gio lam: \n");
    scanf("%u", &gio);
    printf("Nhap tien luong moi gio: \n");
    scanf("%u", &tien);
    printf("Tien luong cua nhan vien %u: %u dong", id, gio*tien);
    return 0;
}