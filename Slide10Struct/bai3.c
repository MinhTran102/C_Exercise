/* Sử dụng kiểu cấu trúc để viết chương trình tính tổng hai khoảng cách biểu thị
bằng đơn vị feet và đơn vị inch. Cụ thể là:
+ Tạo cấu trúc tên distance với hai biến int thành phần: feet và inch.
+ Thực hiện hàm void addDistance() để lấy hai thành phần của cấu trúc và hiển
thị tổng của chúng. */
#include<stdio.h>

typedef struct
{
    float feet;
    float inch;
} dist;

void addDist(dist dst1 ,dist dst2);

void addDist(dist dst1 ,dist dst2)
{
    dist sum = {dst1.feet + dst2.feet, dst1.inch + dst2.inch};
    printf("Tong cua 2 khoang cach lan luot la: %.2f feet, %.2f inch", sum.feet, sum.inch);
}

int main ()
{
    dist dst1 = {10.5, 11.9};
    dist dst2 = {9.8, 12.7};
    addDist(dst1,dst2);
    return 0;
}