//Lưu trữ 1 mảng dãy số và sắp xếp dãy số theo chiều giảm dần, tăng dần.
#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[101];
    int i;
    for( i=0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int j;
    int b;
    for (i=0; i < n; i++) {
        for (j=i+1; j < n; j++) {
             if (a[i]<a[j]) {
                b=a[i];
                a[i]= a[j];
                a[j]= b;
                }
        }
    }
    for (i=0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i=0; i < n; i++) {
        for (j=i+1; j < n; j++) {
             if (a[i]>a[j]) {
                b=a[i];
                a[i]= a[j];
                a[j]= b;
                }
        }
    }
    for (i=0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}