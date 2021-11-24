#include<stdio.h>
main()
{
int year;
printf("\n\t\t****LEAP YEAR CHECKING****\n");
printf("\nEnter the year:");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
{
printf("\n\tIt is a leap year");
}
else
{
printf("\n\tIt is not a leap year");
}
}
else if(year%4==0)
{
printf("\n\tIt is a leap year");
}
else
{
printf("\n\tIt is a not leap year");
}
return(0);
}
