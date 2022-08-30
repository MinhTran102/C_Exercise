#include<stdio.h>
int main()
{
    float rong;
    float dai;
    printf("Hay nhap chieu dai va chieu rong: \n");
    scanf("%g %g", &dai, &rong);
    printf("Chu vi cua hinh chu nhat la: %g\n", 2*dai+2*rong);
    printf("Dien tich hinh chu nhat la : %g", dai*rong);
    return 0;
}