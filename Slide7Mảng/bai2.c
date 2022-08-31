//Lưu trữ số vào 1 mảng và hiển thị các số đó theo thứ tự ngược lại trong mảng.
#include <stdio.h>
int main()
{
    int arr[8] = {2,9,0,5,2,0,2,2};
    int i=7;
    for (i; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}