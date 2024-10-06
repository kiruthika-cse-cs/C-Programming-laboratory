#include<stdio.h>
int main(){
   int b_p,bonus,net_salary,TA;
   scanf("%d",&b_p);
   if(b_p>0&&b_p<=10000)
   {
       bonus=b_p*2/100;
       TA=b_p*1/100;
       net_salary=bonus+TA+b_p;
       printf("%d",net_salary);
   }
   else if(b_p>=10001&&b_p<=25000)
   {
       bonus=b_p*5/100;
       TA=b_p*2/100;
       net_salary=bonus+TA+b_p;
       printf("%d",net_salary);
   }
   else if(b_p<=25001&&b_p>=50000)
{
    bonus=b_p*10/100;
    TA=b_p*3/100;
    net_salary=bonus+TA+b_p;
    printf("%d",net_salary);
    
}
else if(b_p<=500001&&b_p>=100000)
{
    bonus=b_p*15/100;
    TA=b_p*4/100;
    net_salary=bonus+TA+b_p;
    printf("%d",net_salary);
    
}
else
{
    bonus=b_p*20/100;
    TA=b_p*5/100;
    net_salary=bonus+TA+b_p;
    printf("%d",net_salary);
}
}



















