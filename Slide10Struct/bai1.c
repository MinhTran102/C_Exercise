/*Sử dụng kiểu cấu trúc để viết chương trình đọc thông tin chi tiết của nhân viên, bao
gồm Tên, ID, Tiền lương. */
#include<stdio.h>
typedef struct NhanVien 
{
    char name[25];
    int ID;
    int Salary;
} NV;
int main()
{
    NV a;
    printf("Nhap ten nhan vien: \n");
    scanf("%s", &a.name);
    printf("Nhap ID nhan vien: \n");
    scanf("%d", &a.ID);
    printf("Nhap luong nhan vien: \n");
    scanf("%d", &a.Salary);
    printf("Ten nhan vien: %s\n", a.name);
    printf("ID nhan vien: %d\n", a.ID);
    printf("Luong nhan vien: %d", a.Salary);
    return 0;
}

