/*Viết chương trình chứa hàm tìm ước chung lớn nhất của 2 số nguyên không
âm, hàm tính giá trị tuyệt đối của 1 số (nên lấy kiểu float và trả về float), hàm tính căn
bậc 2 của 1 số.*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void uCLN(int u, int v);
void giaTriTuyetDoi(float x);
void canBacHai(float z);
void hienThi();

int main()
{
    system("cls");
    hienThi();
    return 0;
}

//hàm tính ước chung lớn nhất
void uCLN(int u, int v) 
{
    int temp;
    while(v!=0) 
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("UCLN cua %d va %d la: %d\n", u, v, temp);
}

//Hàm tính giá trị tuyệt đối
void giaTriTuyetDoi(float x)
{
    if (x<0)
    {
       float y;
        y =-x;
        printf("Gia tri tuyet doi cua %.2f la: %.2f\n", x, y);
    } else 
    {
        printf("Gia tri tuyet doi cua %.2f la: %.2f\n", x, x);
    }
}

// Hàm tính căn bậc hai 
void canBacHai(float z)
{
    float guess;
    if (z<0)       // kiểm tra số tính cắn bậc hai là số dương hay âm
    {
        printf("Khong the tinh can bac hai so am.\n");
    }
    else
    {
        guess = sqrt(z);
        printf("Gia tri can bac hai cua %.3f la: %.4f", z, guess);
    }
}

void hienThi()
{   
    //Hiển thị tìm ước chung lớn nhất
    int u,v;
    printf("Nhap hai so can tim ucln: \n");
    scanf("%d %d", &u, &v);
    uCLN(u,v);

    //Hiển thị tìm giá trị tuyệt đối
    float x;
    printf("Nhap so can tim gia tri tuyet doi: \n");
    scanf("%f", &x);
    giaTriTuyetDoi(x);

    //Hiển thị tìm căn bậc hai
    float z, t;
    printf("Nhap so can tim can bac hai: \n");
    scanf("%f", &z);
    canBacHai(z);

}
