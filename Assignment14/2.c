#include<stdio.h>

int main()
{
    int a[10];
    int i,n;
    int sum=0;
    printf("enter the 10 number:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
       sum=sum+a[i];
      
    }
    float avg=sum/10.0;
    
     printf("%f",avg);
    return 0;
}