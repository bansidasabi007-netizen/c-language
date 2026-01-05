#include<stdio.h>
    // int main(){
    // char ch;
    // printf("Enter any alphabet:");
    // scanf("%C",&ch);
    // switch(ch){
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //     case 'A':
    //     case 'E':
    //     case 'I':
    //     case 'O':
    //     case 'U':
    //     printf("%c is a vowel.\n",ch);
    //     break;
    //     if((ch>='a'&&ch<='z')||(ch>='A' && ch<='z'))
    //     printf("%c is a consonant.\n",ch);
    //     else
    //     printf("Invalid input.\n");

    // }


//sec task

    // int n, i;
    // float arr[100], smallest;

    // printf("Enter the number of elements (1 to 100): ");
    // scanf("%d", &n);

    // for (i = 0; i < n; ++i) {
    //     printf("Enter number %d: ", i + 1);
    //     scanf("%f", &arr[i]);
    // }

    // smallest = arr[0];

    // for (i = 1; i < n; ++i) {
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];
    //     }
    // }

    // printf("Smallest element = %.2f\n", smallest);

// }



//3rd task


// void reverseNumber(int n) {
//     int reverse = 0;
    
//     while (n > 0) {
//         reverse = reverse * 10 + n % 10;
//         n = n / 10;
//     }
    
//     printf("Reversed number: %d\n", reverse);
// }

// int main() {
//     int num;

//     printf("Enter a 3-digit number: ");
//     scanf("%d", &num);


//     if (num >= 100 && num <= 999) {
//         reverseNumber(num);
//     } else {
//         printf("Invalid input! Please enter 3 digits.\n");
//     }

// }



//4th task


// int main(){
//     int arr[5], i;
//     int *ptr;

    
//     printf("Enter 5 numbers:\n");
//     for (i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }


//     ptr = arr;

//     printf("\nSquares of the elements are:\n");
//     for (i = 0; i < 5; i++) {
      
//         int square = (*ptr) * (*ptr);
        
//         printf("%d ", square);

       
//         ptr++;
//     }

   
// }







//5th task



// int main(){
   
//     int i, j;

  
//     for (i = 10; i >= 6; i--) {
        
        
//             for (j = 10; j >= i; j--) {
//             printf("%d ", i * i);
//         }
        
//              printf("\n\n");
//     }

// }
