// Write a program to accept two numbers perform addition, subtraction, multiplication, division between them  using user defined function called add( ), sub( ), div( ) and mul( ).
// #include<stdio.h>
// int mul(int, int);
// int add(int, int);
// int sub(int, int);
// int div(int, int);
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     add(a, b);
//     sub(a, b);
//     mul(a, b);
//     div(a, b);
// }
// int add(int x, int y){
//     int sum = x+y;
//     printf("Sum is %d\n", sum);
// }
// int sub(int x, int y){
//     int substraction = x-y;
//     printf("Substraction is %d\n", substraction);
// }
// int mul(int x, int y){
//     int multiplication = x*y;
//     printf("Multiplication is %d\n", multiplication);
// }
// int div(int x, int y){
//     float division = (float)x/y;
//     printf("Division is %.2f\n", division);
// }

// Write a program to find out the largest among three numbers using user defined function.
// #include <stdio.h>
// int greatestNumber(int, int, int);
// int main()
// {
//     int a, b, c;
//     printf("Enter three number: ");
//     scanf("%d%d%d", &a, &b, &c);
//     greatestNumber(a, b, c);
// }
// int greatestNumber(int x, int y, int z)
// {
//     int greatest;
//     if (x > y && x > z)
//     {
//         greatest = x;
//     }
//     else if (y > x && y > z)
//     {
//         greatest = y;
//     }
//     else
//     {
//         greatest = z;
//     }
//     printf("The greatest number is %d", greatest);
// }



// Write a function which receives a float and int from main(), finds the product of these two and returns the product which is printed through main.
// #include<stdio.h>
// int mul(int, int);
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("The product of two number is %d", mul(a, b));
// }
// int mul(int a, int b){
//     int product = a*b;
//     return product;
// }





// Write a program to check whether the given number is prime or not using user defined function.
// #include<stdio.h>
// int primeNumber(int);
// int main(){
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);
//     primeNumber(n);
// }
// int primeNumber(int a){
//     int checkpoint = 0;
//  for (int i = 2; i <= a/2; i++)
//  {
//    if (a%i == 0)
//    {
//       checkpoint = 1;
//       break;
//    }
//  }
//  if (checkpoint == 0 && a != 2 && a != 1)
//  {
//     printf("The number is prime number.\n");
//  }
//  else{
//      printf("The number is not prime number.");
//  }
// }



// Write a program to find factorial of a given number using user defined function named long int factorial(int).
// #include<stdio.h>
// long int factorial(int);
// int main(){
//     int number;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     factorial(number);
// }
//  long int factorial(int n){
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//        fac = fac * i;
//     }
//     printf("The factorial is %d", fac);
// }




// Write a program to calculate a raised to power b using user defined function with following prototype int power(int,int).
// #include<stdio.h>
// int power(int, int);
// int main(){
//     int a, b;
//     printf("Enter base: ");
//     scanf("%d", &a);
//     printf("Enter power: ");
//     scanf("%d", &b);
//     power(a, b);
// }
// int power(int a, int b){
//     int totalAnswer = 1;
//     for (int i = 0; i < b; i++)
//     {
//        totalAnswer = totalAnswer * a;
//     }
//     printf("The power of a to b is %d", totalAnswer);
// }



// Write a program to display factorial of a given number using recursive function.
// #include<stdio.h>
// int factorial(int);
// int main(){
//     int number;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     printf("The factorial is %d", factorial(number));
// }
// int factorial(int n){
//     if (n==1)
//     {
//       return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }




// Write a program to calculate sum of the series 1+2+3+4+…………+n using recursive function.
// #include<stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     printf("The total sum of series is %d", sum(n));
// }
// int sum(int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     else{
//         return n + sum(n-1);
//     }
// }



// Write a program to calculate Fibonacci series using recursive function
// #include<stdio.h>
// int fibonacciSeries(int n);
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     printf("The fibonacci series are: ");
//     for (int i = 1; i <= n; i++)
//     {
//        printf("%d\t", fibonacciSeries(i));
//     }
// }
// int fibonacciSeries(int n){
//     if (n<=2)
//     {
//         return 1;
//     }
//     else{
//         return (fibonacciSeries(n-1)+fibonacciSeries(n-2));
//     }
// }




// Write a program to calculate a raised to the power b using recursive function.
// #include<stdio.h>
// int product(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter two number: ");
//     scanf("%d%d", &a, &b);
//     printf("b raised to power a is %d", product(a, b));
// }
// int product(int a, int b){
//     if (b == 0)
//     {
//       return 1;
//     }
//     else{
//         return a * product(a, b-1);
//     }
// }





// Write a program to find the sum of first twenty natural numbers using function.
// #include<stdio.h>
// int sumOfNaturalNumber(int n);
// int main(){
//     int n = 20;
//     printf("The sum of first twenty number is %d", sumOfNaturalNumber(n));
// }
// int sumOfNaturalNumber(int n){
//     if (n== 1)
//     {
//      return 1;
//     }
//     else{
//         return n + sumOfNaturalNumber(n-1);
//     }
// }