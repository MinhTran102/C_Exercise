/* Tiếp tục bài 1, thêm cấu trúc ngày sinh ở trong cấu trúc của nhân viên. Nhập giá trị và
hiển thị. */
#include<stdio.h>
typedef struct NhanVien 
{
    char name[25];
    int ID;
    int Salary;
    char birth[25];
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
    printf("Nhap ngay sinh nhan vien: \n");
    scanf("%s", &a.birth);
    printf("Ten nhan vien: %s\n", a.name);
    printf("ID nhan vien: %d\n", a.ID);
    printf("Luong nhan vien: %d\n", a.Salary);
    printf("Ngay sinh nhan vien: %s", a.birth);
    return 0;
}