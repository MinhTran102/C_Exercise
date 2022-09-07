/* Viết chương trình quản lý học sinh trong một lớp với cấu trúc bao gồm: họ và
tên, tuổi, địa chỉ, điểm trung bình tích lũy GPA. */
#include<stdio.h>

typedef struct 
{
    char fullname[25];
    int age;
    char address[50];
    float gpa;
} student;

int main() 
{
    system("cls");
    hienThi();
    return 0;
}
void hienThi ()
{
    while (1)
    {
        int num;
        char info[50];
        printf ("Hay lua chon: "\n);
        printf ("1. Nhap thong tin hoc sinh\n");
        printf ("2. Tim kiem hoc sinh\n");
        printf ("3. Thoat\n");
        scanf ("%d", &num);
        printf ("\n----------------------------\n");
        if (num == 1) 
        {   
            int count,i;
            printf("So hoc sinh ban muon nhap: ");
            scanf("%d ", &count);
            for (i = 1; i <= count; i++) 
            {
                printf("Nhap thong tin hoc sinh so %d: ", i);
                scanf("%s", &info);
            }
        }
        else if (num == 2) 
        {

        }
    }
    
}
// bỏ qua