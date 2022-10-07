#include<stdio.h>

int main()
{
    int i;
    
    int a[10];
    int max=-1;
    printf("enter the 10 number:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        max=a[i];   
       
    }
    printf("%d",max);

}