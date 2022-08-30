//Kiểm tra số chẵn hay số lẻ
#include<stdio.h>
int main()
{
    int a;
    printf("Nhap vao so can kiem tra: \n");
    scanf("%d", &a);
    if ((a==1) || (a%2==1))
        {
            printf("So nhap vao la so le");
        }   
            else {
                printf("So nhap vao la so chan");
                }
    return 0;
}