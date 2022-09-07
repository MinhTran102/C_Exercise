#include<stdio.h>
int main() 
{
    int a[5][5];
    int i;
    int j;
    for (i=1; i<=3; i++)
    {
        for (j=1; j<=3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    };

    for (i=1 ; i<=3; i++)
    {
        for (j=1 ; j<=3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    };
    return 0;
}