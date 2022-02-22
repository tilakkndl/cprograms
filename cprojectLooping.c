//program to print fibonacci series
// #include<stdio.h>
// int main(){
//     int number, temp, a, b;
//     printf("Enter the number of fibonacci number you want  print:\n");
//     scanf("%d", &number);
//     a= 1;
//     b = 1;
//     printf("%d\t%d\t", a, b);
//     for (int i = 0; i < number-2; i++)
//     {
//         temp = a;
//         a = b;
//         b = b+temp;
//         printf("%d\t", b);
//     }  
// }



//program to print armstrong number between 1 and 500
// #include<stdio.h>
// int main(){
//     int sum = 0, rem, temp;
//     printf("The armstrong number between 1 and 500 are: ");
//     for (int i = 1; i <= 500; i++){
//     sum = 0;
//     temp = i;
    
//        for (int j = i ; j>0; j/=10)
//        {
//           rem = j%10;
//           sum = sum + rem*rem*rem; 
//        }
//        if (sum == temp && temp != 1)
//        {
//          printf("%d\t", temp);
//        }
//     } 
// }



//to generate number from 1 to10
// #include<stdio.h>
// int main(){
//     int n=1;
//     while (n<=10)
//     {
//        printf("%d\t", n);
//        n++;
//     }
// }



//to generate number from 9 to 0
// #include<stdio.h>
// int main(){
//     int n=9;
//     while (n>=0)
//     {
//        printf("%d\t", n);
//        n--;
//     }
// }





//to generate number  10 to 0 and print sum
// #include<stdio.h>
// int main(){
//     int n=10, sum = 0;
//     while (n>=0)
//     {
//        printf("%d\t", n);
//        sum = sum + n;
//        n--;
//     }
//     printf("\n");
//     printf("Sum of numbers is %d", sum);
// }



//to find factorial of numbers
// #include<stdio.h>
// int main(){
//     int n, factorial = 1;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for (int i = n; i > 1; i--)
//     {
//        factorial = factorial*i;
//     }
//     printf("The factorial is %d", factorial);
// }



//to display the number of +ve, -ve and zero entered by user
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int number, zero = 0, positive = 0, negative = 0;
//     int *ptr;
//     printf("Enter the number of number you want to enter: \n");
//     scanf("%d", &number);
//     ptr = (int *)malloc(number*sizeof(int));
//     printf("Enter the numbers: ");
//     for (int i = 0; i < number; i++)
//     {
//      scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < number; i++)
//     {
//        if (ptr[i]==0)
//        {
//          zero = zero+1;
//        }
//        else if(ptr[i]>0){
//            positive = 1+positive;
//        }
//        else{
//            negative = negative+1;
//        }
//     }
//     printf("No of negative number = %d\n No of positive number = %d\n No of zero = %d\n", negative, positive, zero);
// }



// *****
// ****
// ***
// **
// *
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = n; i > 0; i--)
//     {
//        for (int j = 0; j < i; j++)
//        {
//          printf("*");
//        }
//        printf("\n");
//     }
// }



// multiplication from 1-10
// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 10; i++)
//     {
//        for (int j = 1; j <= 10; j++)
//        {
//          printf("%d * %d = %d\n", i, j, i*j);
//        }
//        printf("\n\n\n\n");
//     }
// }



//to print square it nunber is odd and cube if number is even
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: \n");
//     scanf("%d", &n);
//     if (n%2 == 0)
//     {
//         printf("%d", n*n);
//     }
//     else{
//         printf("%d", n*n*n);
//     }
// }


//to calculate the power of number
// #include<stdio.h>
// int main(){
//     int baseNumber, powerNumber, totalResult=1;
//     printf("Enter base number and power number: ");
//     scanf("%d%d", &baseNumber, &powerNumber);
//     for (int i = 0; i < powerNumber; i++)
//     {
//         totalResult = totalResult * baseNumber;
//     }
//     printf("%d to the power %d = %d", baseNumber, powerNumber, totalResult);
// }



//program to find the product of digits of a number
// #include<stdio.h>
// int main(){
//     int n, digits, productsOfDigits=1;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for ( ; n > 0; n/=10)
//     {
//       digits = n%10;
//       productsOfDigits = productsOfDigits*digits;
//     }
//     printf("The product of digits is %d", productsOfDigits);
// }




//program to find the sum of digits of a number
// #include<stdio.h>
// int main(){
//     int n, digits, sumOfDigits=0;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for ( ; n > 0; n/=10)
//     {
//       digits = n%10;
//       sumOfDigits = sumOfDigits+digits;
//     }
//     printf("The product of digits is %d", sumOfDigits);
// }