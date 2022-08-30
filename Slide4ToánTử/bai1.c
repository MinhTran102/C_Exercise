//Kiểm tra bit thứ 3 là 1 hay 0
#include<stdio.h>
int main()
{
    unsigned int a;
    printf("Nhap so kiem tra: \n");
    scanf("%o", &a);
    a = a >> 2;
    if (a%2==1) {
        printf("Bit thu 3 la 1");
    } 
        else {
            printf("Bit thu 3 la 0");
        }
    return 0;
}