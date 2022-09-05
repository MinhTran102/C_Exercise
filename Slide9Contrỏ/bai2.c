//Viết chương trình đối chiếu 2 chuỗi bằng cách sử dụng con trỏ.
#include<stdio.h>
#include<stdbool.h>

// Hàm bool là hàm đưa ra true false
bool compare (const char s1[100], const char s2[100])
{
    int i = 0;
    const char *ptr1 = s1;
    const char *ptr2 = s2;
    bool isEquals = false;

    while ( (*(ptr1+i) == *(ptr2+i)) && 
            (*(ptr1+1) != '\0') &&
            (*(ptr2+i) != '\0' ))
            i++;
    
    /* Nếu các kí tự của 2 str giống nhau, i sẽ tiếp tục đếm 
    đến khi hết 2 chuỗi kết thúc các chuỗi là kí tự '\0' đưa ra
    true còn không thì đưa ra false*/

    if ( (*(ptr1+i) == '/0') && (*(ptr2+i) == '/0')) {
        isEquals = true;
    }
    else {
        isEquals = false;
    }
    printf("%d\n", isEquals);
    return isEquals;
}

int main()
{
    char s1[100], s2[100];
    printf("Nhap 2 chuoi can so sanh: \n");
    gets(s1);
    gets(s2);
    compare (s1,s2);
    getch();
}
/* Tất cả các kết quả đều ra 0, chưa fix được*/
