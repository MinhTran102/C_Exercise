/*Viết chương trình nhập vào n phần tử 1 mảng và tìm số lớn nhất bằng cách sử dụng
con trỏ.*/
#include<stdio.h>
int main() 
{
    int n;
    int i;
    int a[1000];
    int *pArr = a;
    printf("Nhap vao so luong phan tu cua mang: \n");
    scanf("%d", &n);
    printf("Nhap vao cac gia tri cua mang: \n");
    for (i = 0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int max = *pArr;
    for (i = 0; i < n; i++)
    {
        if (max < *(pArr+i)) {
            max = *(pArr+i);
        }
    }
    printf("Gia tri lon nhat cua mang la: %d", max);
    return 0;
}