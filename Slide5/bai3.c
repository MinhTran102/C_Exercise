//Hiển thị thông báo thời tiết
#include<stdio.h>
int main()
{
    int a;
    printf("Nhap vao nhiet do: \n");
    scanf("%d", &a);
    if (a<0) {
        printf("Thoi tiet lanh cong");
    }   
        else if ((a>=0) && (a<=10)) {
                    printf("Thoi tiet rat lanh");
        }
                    else if ((a>=10) && (a<=20)) {
                            printf("Thoi tiet lanh");
                    }
                            else if ((a>=20) && (a<=30)) {
                                    printf("Thoi tiet tuyet voi");
                            }
                                    else if ((a>=30) && (a<=40)) {
                                            printf("Thoi tiet nong");
                                    }
                                            else {
                                                printf("Thoi tiet rat nong");
                                            }
    return 0;
}