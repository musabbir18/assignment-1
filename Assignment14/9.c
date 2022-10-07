#include<stdio.h>

int main()
{
    int i;
    int a[10];
    printf("enter the 10 number:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=9;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}