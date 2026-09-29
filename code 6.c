#include <stdio.h>
int main()
 {
     float a;
     float b;
     float c;
     printf("enter a :");
     scanf("%d", &a);
     printf("enter b :");
     scanf("%d", &b);
     printf("enter c :");
     scanf("%d", &c);
     float A = a+b+c;
     float Avg =A/3;
     printf("Avg of a,b,c :%f" ,Avg);
     return 0 ;
 }
