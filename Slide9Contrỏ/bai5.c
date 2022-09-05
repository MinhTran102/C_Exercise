//Viết chương trình hoán đổi 2 mảng bằng cách sử dụng con trỏ.
#include<stdio.h>
int main()
{
    int c,d,i,j,s;
    int a[10], b[10];
    printf("Nhap vao so luong phan tu cua 2 mang: \n");
    scanf("%d %d",&c, &d);
     if (c<d) {
        s = d;
    }
    else {
        s = c;
    }
    printf("Nhap vao cac gia tri cua mang 1: \n");
    for (i = 0; i<c; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap vao cac gia tri cua mang 2: \n");
    for (i = 0; i<d; i++) {
        scanf("%d", &b[i]);
    }
    int *x = c;
    int *y = d;
    for (i = 0; i<s; i++) {
        j = *(x+i);
        *(x+i) = *(y+i);
        *(y+i) = j;
    }
    printf("Mang 1 sau khi doi: \n");
    for (i = 0; i<s; i++) {
        printf("%d ", *(x+1));
    }
    printf("\nMang 2 sau khi doi: \n");
    for (i = 0; i<s; i++) {
        printf("%d ", *(y+1));
    }
    return 0;
}
// chưa xong