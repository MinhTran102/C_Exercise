//Tìm tất cả số nguyên tố trong khoảng từ 0 đến 100.
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1;
    for (; i < 100; i++)
    {
        int count = 0; // đếm số ước của a
        int j = 2;
        for (; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 && i > 1)
            printf("%d ", i);
    }
}
/*Nếu 1 số có nhiều ước hơn số nguyên tố thì một trong 
các ước của nó phải nhỏ hơn hoặc bằng căn bậc hai của chính nó*/
