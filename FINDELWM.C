#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n;
// int sum=0;
clrscr();
printf("Enter the Element :");
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 // printf("output Element\n");
}

printf("Output Element\n");
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
// sum=sum+a[i];

 }
// printf("%d sum",sum);
 getch();
 }