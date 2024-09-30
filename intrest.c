#include<stdio.h>
int main()
{
    int p,r,t;
    float SI;
    printf("principle amount");
    scanf("%d",&p);
    printf("rate:");
    scanf("%d",&r);
    printf("time:");
    scanf("%d",&t);
    SI=(float)(p*r*t)/100;
    printf("%.2f",SI);
}
