#include<stdio.h>
int main(){
   float unit, bill;
   printf("Enter the amount of consumed units:");
   scanf("%f",&unit);
   if(unit>0){
   if(unit<100){
    bill=unit*6;
   }
   else if(unit>=100 && unit<100){
    bill=(unit-100)*7+100*6;
   }
   else if(unit>=200 && unit<300){
    bill=(unit-200)*8+100*7+100*6;
   }
   else{
    bill=unit*10;
   }
   }
   else{
    printf("Invalid input");
   }
   printf("Your electricity bill is %.2f tk. \n", bill);
return 0;
}
