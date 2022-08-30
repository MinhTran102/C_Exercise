//Tính tiền phải trả hàng tuần
#include<stdio.h>
#define payrate      12.00
#define taxrate300   0.15
#define taxrate450   0.2
#define taxraterest  0.25
#define overtime     40
int main()
{
    unsigned int hour = 0;
    double gross = 0.0;
    double tax = 0.0;
    double net = 0.0;
    printf("Enter your working hour: \n");
    scanf("%d", &hour);
    if (hour <= 40) {
        gross = 12 * hour;
        if (gross <= 300) {
            printf("Your Gross pay this week: %.2f\n", gross);
            printf("Your Taxes  this week: %.2f\n", gross*0.15);
            printf("Your Net pay this week: %.2f\n", gross*0.85);
        }   else if ((gross > 300) && (gross <= 450)) {
                    printf("Your Gross pay this week: %.2f\n", gross);
                    printf("Your Taxes  this week: %.2f\n", gross*0.2);
                    printf("Your Net pay this week: %.2f\n", gross*0.8);
            }       else {
                        printf("Your Gross pay this week: %.2f\n", gross);
                        printf("Your Taxes  this week: %.2f\n", gross*0.25);
                        printf("Your Net pay this week: %.2f\n", gross*0.75);
                    }
    }   else {
            gross = (12 * 40) + 18 * (hour - 40);
            printf("Your Gross pay this week: %.2f\n", gross);
            printf("Your Taxes  this week: %.2f\n", gross*0.25);
            printf("Your Net pay this week: %.2f", gross*0.75);

    }
    return 0;
}