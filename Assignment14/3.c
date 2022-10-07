#include<stdio.h>

int main()
{
    int i;
    int a[10];
    int sumE=0,sumO=0;
    printf("entre the number:");
    for(i=-0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
       if(a[i]%2==0)
       sumE=sumE+a[i];
       else
       sumO=sumO+a[i];

    }
    printf("%d\n",sumE);
    printf("%d",sumO);
    return 0;
}