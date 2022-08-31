//Lưu trữ số trong mảng và sau đó đưa giá trị đã lưu hiển thị trên màn hình.
#include <stdio.h>
int main()
{
    int arr[8] = {2,9,0,5,2,0,2,2};
    int i=0;
    for (i; i<=7; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}