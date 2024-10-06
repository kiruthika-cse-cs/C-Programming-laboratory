#include <stdio.h>

int main(){
   int tam,eng,mat,soc,sci;
   int avg,tot;
   scanf("%d%d%d%d%d",&tam,&eng,&mat,&soc,&sci);
   tot=tam+eng+mat+soc+sci;
   avg=tot/500;
   if(tot>=450&&tot<=500)
   {
       printf("grade A");
   }
   else if(tot>=300&&tot<=451)
 {
     printf("grade B");
 }
 else if(tot>=250&&tot<=301)
 {
     printf("grade C");
 }
 else
 {
     printf("fail");
 }
 
 if(tam>=50&&eng>=50&&mat>=50&&sci>=50&&soc>=50){
     printf("\ncleared the exam");
 }
 else
 {
     printf("\nfailed the exam");
 }
 
 }
