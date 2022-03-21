#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i,n,a[100],max,min;
 clrscr();
 printf("Enter the Element :");
 scanf("%d",&n);
 printf("Enter the value of Array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("Maximum value %d\n",max);
printf("Minimum value %d",min);
getch();
}