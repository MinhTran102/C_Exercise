//Viết chương trình hiển thị chuỗi theo thứ tự ngược bằng cách sử dụng con trỏ.
#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
    char *pStr = str;

    printf("Nhap vao chuoi: \n");
    scanf("%s", str);

    int length = strlen(str);
    int i = length - 1;
    for (i; i>=0; i--) {
        printf("%c", *(pStr+i));
    }
	return 0;
}