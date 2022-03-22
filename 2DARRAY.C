#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
int a[3][3];
cirscr();
printf("Enter the Array :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
getch();
}

