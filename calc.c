#include<stdio.h>

int main(){
    int marks;
    printf("Enter your Marks :");
    scanf("%d",&marks);
    (marks>=90) ? printf("Your Grade is A ") : (marks>=80 ? printf("Your Grade is B ") : (marks>=60 ?printf("Your Grade is C " ) : (marks>= 50 ? printf("Your Grade is D ") :(marks>= 35 ? printf("Your Grade is E ") : printf("Your Grade is F ") ))));
    switch(marks / 10){
        case 10:
           printf("Excelent Work");
        break;  


        case 9:
           printf("Well Done");
        break;


        case 8:
           printf("Well Done !");
        break; 

        case 7:
           printf("Well Done !");
        break;

        case 6:
           printf("Well Done !");
        break;
        case 5:
           printf("Good job !");
        break;
        case 4:
           printf("Good job !");
        break;
        case 3:
           printf("You can do better !");
        break;
        case 2:
           printf("Sorry You are fail !");
        break;
        case 1:
           printf("Sorry You are fail !");
        break;
    }



    if(marks<35){
        printf(" Please Try Again next Time");
    }else{
        printf(" You are eligible for next level");
    }
}

