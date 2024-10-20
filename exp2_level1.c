#include<stdio.h>
#include<math.h>
{
    int x,n1,n2,opt;
    scanf("%d%d",&n1,&n2);
    scanf("%d",&opt);
    printf("\nenter two number:%d%d",n1,n2);
    printf("\nenter your option:%d",opt);
    switch(opt)
    {
        case 1:
        printf("\naddition:%d",n1+n2);
        break;
        case 2:
        printf("\nsubraction:%d",n1-n2);
        break;
        case 3:
        printf("\nproduct:%d",n1*n2);
        break;
        case 4:
        printf("\ndivision:%d",n1/n2);
        break;
        case 5:
        printf("\nmodulus:%d",n1%n2);
        break;
        case 6:
        printf("\naverage:%d",(n1+n2)/2);
        break;
        case 7:
        printf("\npower:%.lf",pow(n1,n2));
        break;
        default:
        printf("\nthe option exceeds 7");
    }    
    
}



