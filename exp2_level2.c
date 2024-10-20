#include<stdio.h>
int main()
{
    int days;
    float fine;
    scanf("%d",&days);
    printf("enter how many days late you are:%d",days);
    if(days>=1&&days<=5)
    {
        fine=days*0.5;
        printf("\nYour fine:Rs%.2f",fine);
    }
    else if(days>=6&&days<=10)
    {
        fine=(5*0.5)+(days-5)*1;
        printf("\nYour fine:Rs%.2f",fine);
    }
    else if(days>10&&days<=20)
    {
        fine=(((5*0.5)+(5*1))+((days-10)*5));
        printf("\nYour fine:Rs%.2f",fine);
    }
    else if(days>=30)
    {
        printf("\nYour membership will be cancelled");
    }
    else if(days<=0)
    {
        printf("no fine");
    }
}




