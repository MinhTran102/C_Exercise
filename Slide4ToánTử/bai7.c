//Tìm trung bình cộng của 4 số thực
#include<stdio.h>
int main()
{
    float a, b, c, d;
    printf("Nhap 4 so thuc: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float e = (a+b+c+d)/a;
    printf("Trung binh cong cua 4 so la: %f", e);
    return 0;
}