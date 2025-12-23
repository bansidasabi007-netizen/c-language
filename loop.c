#include<stdio.h>





int main(){
    int num,count = 0;
    printf("Enter any number:");
    scanf("%d ", &num);
     if(num<0){
        num= -num;
     }
     do{
        count++;
        num = num/10;
     }while(num!=0);
     printf("total number of digits:%d", count);
     return 0;






    char ch ='a';
    do{
        printf("%c ", ch);
        ch = ch +4;
    }while(ch<='z');



int num , first ,last;
printf("Enter any Number: ");
scanf("%d ", &num);
 if(num < 0){
   num =-num;
 }
 last = num %10;
 while(num >= 10){
   num = num/10;
 }
 first = num;
 printf("The sum of the first and the last digit: %d",first + last);
 }  



 




