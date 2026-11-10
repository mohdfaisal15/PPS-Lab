#include<stdio.h>
void main()
{
int A[2][2],B[2][2],C[2][2],D[2][2],i,j;
printf("Enter 4 values A:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&A[i][j]);
printf("Enter 4 values B:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&B[i][j]);
printf("Enter 4 values C:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&C[i][j]);
for(i=0;i<2;i++)
for(j=0;j<2;j++)
D[i][j]=A[i][j]-B[i][j]-C[i][j];
printf("substraction=\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d\t",D[i][j]);
printf("\n");
}
}
