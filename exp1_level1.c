#include<stdio.h>
int main()
{
    int net_price,original_price;
    int tax,gst;
    scanf("%d%d",&net_price,&original_price);
    printf("Enter net price and original cost:%d\t%d",net_price,original_price);
    tax=net_price-original_price;
    gst=tax*(100/original_price);
    printf("\n%d%%",gst);
}


