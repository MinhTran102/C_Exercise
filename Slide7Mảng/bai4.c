//Viết chương trình tạo một chương trình thời tiết đơn giản.
#include <stdio.h>
int main()
{
   float rain [3][12] = 
   {
    {1.2,2.1,0.3,3.6,5.8,1.6,5.4,4.6,3.5,2.9,2.8,3.1},              //36.9
    {2.5,2.3,2.6,2.1,2.1,3.0,4.5,5.2,3.1,3.9,3.4,2.4},              //37.1
    {1.6,2.1,2.3,1.8,3.4,4.6,4.3,3.2,3.6,4.6,1.5,1.8}               //34.8
   };
   int year;
   float total;
   float subtot;
   int month;
   for (year = 0, total = 0; year < 3; year++) {
        for (month = 0, subtot = 0; month < 12; month++)
        {
            subtot += rain[year][month];
        };
        printf("%5d \t%15.1f\n", 2020 + year, subtot);
        total += subtot;
   };
   for (month = 0; month < 12; month++) {
        for (year = 0, subtot = 0; year < 3; year++)
        {
            subtot += rain[year][month];
        };
        printf("%4.1f ", subtot/3);
   };
    return 0;
}