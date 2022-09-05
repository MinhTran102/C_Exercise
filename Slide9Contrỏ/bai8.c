//Viết hàm tìm giai thừa của 1 số cho trước bằng con trỏ.
#include<stdio.h>
int main() 
{
    system("cls");
    hienThi();
    return 0;
}
void hienThi ()
{
    int a,i;
    printf("Nhap so can tinh giai thua: \n");
    scanf("%d", &a);
    int b = a;
    int *pA = &a;
    if (a>0)
    {
        for (i = (a-1); i >= 1; i--)
        {
            *pA = *pA * i;
        }
        printf("Giai thua cua %d: %d", b, *pA);
    }
}