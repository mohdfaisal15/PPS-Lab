#include<stdio.h>
int main()
{
int choice,units;
float bill;\
printf("Electricity bill calculator\n");
printf("Domestic\n");
printf("Commercial\n");
printf("Industrial\n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("Enter units consumed:");
scanf("%d",&units);
if(units<0)
{
printf("Invalid units");
return 0;
}
switch(choice)
{
case 1:bill=units*2;
printf("Domestic bill=Rs.%2f",bill);
break;
case 2:bill=units*5;
printf("Commercial bill=Rs.%2f",bill);
break;
case 3:bill=units*7;
printf("Industrial bill=Rs.%2f",bill);
break;
default:
printf("Invalid choice");
}
return 0;
}
