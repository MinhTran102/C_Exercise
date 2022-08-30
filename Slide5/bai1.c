//Kiểm tra hai số bằng nhau
#include<stdio.h>
int main()
{
    float a,b;
    printf("Nhap vao 2 so: \n");
    scanf("%f %f", &a, &b);
    if ((a != (int) a) || (b != (int) b))
        {
            printf("So nhap vao khong phai so nguyen");
        }   
            else if (a==b) {
                    printf("Hai so bang nhau");
            }
                    else {
                        printf("Hai so khong bang nhau");
                    }
    return 0;
}