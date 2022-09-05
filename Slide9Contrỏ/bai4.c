//Viết chương trình tìm kiếm phần tử của mảng bằng cách sử dụng con trỏ.
#include<stdio.h>
int main() 
{
    int n,b,j;
    int a[100];
    int *pA = a;
    printf("Nhap vao so luong phan tu cua mang: \n");
    scanf("%d", &n);
    printf("Nhap vao cac gia tri cua mang: \n");
    for (j = 0; j<n; j++) {
        scanf("%d", &a[j]);
    }
    printf("Nhap vao gia tri can tim trong mang: ");
    scanf("%d", &b);
    int *pB = &b;
    search (pA, pB, n);
    return 0;
}
void search (int *pA, int *pB, int n) 
{
    int i, x=0;
    for (i = 0; i < n; i++) {
        if (*(pA+i)==*pB)
        {
            x=1;
            break;
        }
        else 
            continue;
    }
    if (x==1) {
        printf("Da tim thay\n");
    }
    else {
        printf("Khong tim thay");
    }
}