#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
        printf("%d * %d =%d\n",i,num,i*num);
    
    return 0;
}