#include<stdio.h>
void main()
{
    int i, a[5],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    
}