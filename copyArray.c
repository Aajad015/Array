#include<stdio.h>
int main()
{
    int n,a[10],b[10],i;
    printf("Enter the element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d:",i);
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    b[i]=a[i];
    }
    printf("Copy the Arayin B:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",b[i]);
    }
}