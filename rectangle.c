#include<stdio.h>
int main()
{
    int len,wid,area,perimeter;
    printf("length:");
    scanf("%d",&len);
    printf("width:");
    scanf("%d",&wid);
    area=len*wid;
    printf("the area is%d\n",area);
    perimeter=(len+wid)*2;
    printf("the perimeter is%d\n",perimeter);
    
}
