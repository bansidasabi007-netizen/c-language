#include<stdio.h>

int main(){
    float c;
    printf("Enter the value of celsius=");
    scanf("%f",&c);
    float F = (9.0/5.0 * c) + 32 ;
    printf("The temprature in fahrient is:%f,",F);





int bs;
printf("\nEnter the value of salary=");
scanf("%d",&bs);

int A;
printf("\nEnter the value of HRA=");
scanf("%d", &A);
int HRA  = (bs * A/100);

int B;
printf("\nEnter the value of DA=");
scanf("%d", &B);
int DA = (bs * B/100);

int C;
printf("\nEnter the value of TA=");
scanf("%d", &C);
int TA= (bs * C/100);

int output = bs +HRA + DA + TA;
printf("output: gross salary is :%d",output);









int f;
printf("\nEnter the value of first triangle=");
scanf("%d",&f);

int s;
printf("\nEnter the value of sec triangle=");
scanf("%d",&s);

int t = 180-(f+s); 

if(t>0){

printf("\nthird value is:%d",t);
}
else{
    printf("\nerror");
}

}


