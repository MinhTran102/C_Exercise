#include<stdio.h>
int main()
{
    enum week {Mon = 2, 
               Tue, 
               Wed, 
               Thu, 
               Fri, 
               Sar, 
               Sun};
    printf("Chi so Monday la: %d\n ", Mon);
    printf("%d ", Tue);
    printf("%d ", Wed);
    printf("%d ", Thu);
    printf("%d ", Fri);
    printf("%d ", Sar);
    printf("%d ", Sun);
    return 0;
}