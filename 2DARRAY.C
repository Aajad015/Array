#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[3][3];
clrscr();
printf("Enter the Array\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
 getch();
}

