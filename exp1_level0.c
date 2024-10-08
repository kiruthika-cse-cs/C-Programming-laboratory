#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("enter any number:%d",num);
    if(num&1==1)
    {
        printf("\ngiven number is odd");
    }
    else 
    {
        printf("\ngiven number is even");
    }
    
}
