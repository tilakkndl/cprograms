// to print sum, product and greatest number from 10 numbers
// #include<stdio.h>
// int main(){
//     int a[10], sum = 0, product = 1, greatest;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//        sum = sum + a[i];
//        product = product * a[i];
//        greatest = a[0];
//        if (greatest < a[i])
//        {
//         greatest = a[i];
//        }
//        else{
//            greatest = a[0];
//        }
//     }
//     printf("Greatest number = %d\n Sum = %d\n product = %d\n", greatest, sum, product);
// }

// Write a program to enter 10 different numbers and print them with array variables and their addresses.
// #include<stdio.h>
// int main(){
//     int a[10];
//     for (int i = 0; i < 10; i++)
//     {
//        scanf("%d", &a[i]);
//     }
//     printf("Number's are: ");
//     for (int i = 0; i < 10; i++)
//     {
//        printf("%d\t", a[i]);
//     }
//     printf("\n");
//     printf("The address of numbers are: ");
//     for (int i = 0; i < 10; i++)
//     {
//       printf("%d\t", &a[i]);
//     }
// }

// Write a program to accept 10 numbers and finds and prints the largest and smallest among those numbers.
// #include <stdio.h>
// int main()
// {
//     int a[10], smallest, greatest;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     smallest = a[0];
//     greatest = a[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if (smallest > a[i])
//         {
//             smallest = a[i];
//         }

//         if (greatest < a[i])
//         {
//             greatest = a[i];
//         }
//     }
//     printf("Greatest number = %d\n Smallest number = %d", greatest, smallest);
// }

// Write a program that asks user to enter 10 numbers and sorts them in an ascending order and display the sorted number.
// #include<stdio.h>
// int main(){
//     int a[100], temp, i, j;
//     printf("Enter 10 numbers: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//       for (j = i; j < 10; j++)
//       {
//          if (a[i]>a[j])
//          {
//              temp = a[i];
//              a[i] = a[j];
//              a[j] = temp;
//          }
//       }
//     }
//       printf("The number arranged in ascending order is: \n");
//       for (i = 0; i < 10; i++)
//       {
//           printf("%d\t", a[i]);
//       }
// }

// Write a program to read 10 numbers and reorders them in ascending order using function.
// #include<stdio.h>
// int ascendingOrder(int a[]);
// int main(){
//     int a[10];
//     printf("Enter the array elements: ");
//     for (int i = 0; i < 10; i++)
//     {
//        scanf("%d", &a[i]);
//     }
//     ascendingOrder(a);
// }
// int ascendingOrder(int num[]){
//     int temp;
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (num[i]<num[j])
//             {
//                 temp = num[i];
//                 num[i] = num[j];
//                 num[j] = temp;
//             }
//         }
//     }
//     printf("The ascending order is: ");
//     for (int i = 0; i < 10; i++)
//     {
//        printf("%d\t", num[i]);
//     }
// }

// Write a program that accepts the marks of BscCSIT-I semester student in C- programming. Now display the marks in descending order. Also display maximum and minimum marks.
// #include<stdio.h>
// int main(){
//     int a[100], temp, i, j;
//     printf("Enter 10 numbers: \n");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//       for (j = i; j < 10; j++)
//       {
//          if (a[i]<a[j])
//          {
//              temp = a[i];
//              a[i] = a[j];
//              a[j] = temp;
//          }
//       }
//     }
//       printf("The number arranged in descending order is: \n");
//       for (i = 0; i < 10; i++)
//       {
//           printf("%d\t", a[i]);

//       }
//       printf("\nMaximum marks = %d\n Minimum marks is %d", a[0], a[9]);
// }

// Twenty-five numbers are entered through the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many are odd.
// #include<stdio.h>
// int main(){
//     int a[46], odd = 0, even = 0, positive = 0, negative = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//        if (a[i]%2 == 0)
//        {
//         even = even + 1;
//        }
//       else{
//           odd = odd + 1;
//       }
//       if (a[i]>0)
//       {
//          positive = positive + 1;
//       }
//       else{
//           negative = negative + 1;
//       }
//     }
//     printf("\nPositive number = %d\nNegative number = %d\nOdd number = %d\nEven number = %d", positive, negative, odd, even);
// }

// Write a program to read 10 numbers and reorders them in ascending order using array.
//  #include<stdio.h>
// int main(){
//     int a[100], temp, i, j;
//     printf("Enter 10 numbers: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 10; i++)
//     {
//       for (j = i; j < 10; j++)
//       {
//          if (a[i]>a[j])
//          {
//              temp = a[i];
//              a[i] = a[j];
//              a[j] = temp;
//          }
//       }
//     }
//       printf("The number arranged in ascending order is: \n");
//       for (i = 0; i < 10; i++)
//       {
//           printf("%d\t", a[i]);
//       }
// }

// Write a program to read a 2*3 matrix and display it on screen.
// #include <stdio.h>
// int main()
// {
//     int a[2][3];
//     printf("Enter the array elements: ");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("\nThe array is: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
// }

// Write a program to read two m*n matrices and display their sum, difference and product.
// #include <stdio.h>
// int main()
// {
//     int a[3][3], b[3][3], sum[3][3], difference[3][3], product[3][3], total = 0;
//     printf("Enter 1st matrix: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the 2nd matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("\nThe difference of matrix is: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             difference[i][j] = a[i][j] - b[i][j];
//             printf("%d\t", difference[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nThe sum of matrix is: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum[i][j] = a[i][j] + b[i][j];
//             printf("%d\t", sum[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 total = total + a[i][k] * b[k][j];
//             }

//             product[i][j] = total;
//             total = 0;
//         }
//     }
//     printf("The multiplication of matrix is : \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//           printf("%d\t", product[i][j]);
//         }
//         printf("\n");
//     }
// }

// Write a program to display prime numbers betweens 1 to 100.
// #include<stdio.h>
// int checkpoint, b=0;
// int a[66];
// int main(){
//     for (int i = 1; i <= 100; i++)
//     {
//         checkpoint = 0;
//       for (int j = 2; j <= i/2; j++)
//       {
//       if (i%j == 0)
//       {
//          checkpoint = 1;
//          break;
//       }
//       }
//       if (checkpoint == 0 && i != 1 && i != 2)
//       {
//          a[b] = i;
//          b++;
//       }
//     }
//     printf("\n");
//  for (int i = 0; i < b; i++)
//  {
//      printf("%d\t", a[i]);
//  }
// }

// Write a program to read marks of 10 students and print out the top five.
// #include <stdio.h>
// int main()
// {
//     int a[10], temp;
//     printf("Enter marks: ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i; j < 10; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("\nThe top 5 marks are: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", a[i]);
//     }
// }

// Write a program to copy contents of one array into another in reverse order.
// #include <stdio.h>
// int main()
// {
//     int n, a[10], b[10];
//     printf("Enter the number of number you want to enter: ");
//     scanf("%d", &n);
//     printf("Enter the array elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//          b[i]=a[n - i -1];
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t", b[i]);
//     }
// }

// Write a program to find length of string input from user using and without using library function strlen( ).
// #include<stdio.h>
// int main(){
//     char string[44];
//     int i = 0;
//     printf("Enter the stirng: ");
//     scanf("%s", &string);
//     printf("%s", string);
//  while(string[i] != '\0')
//  {
//     i++;
//  }
//  printf("The length of string is %d", i);
// }

// Write a program that accept a string from user and display the content in upper case.
// #include<stdio.h>
// int main(){
//     int b =0, ascii[33];
//     char a[33];
//     printf("Enter string:");
//     scanf("%s", a);
//   while (a[b] != '\0')
//   {
//      b++;
//   }
//     for (int i = 0; i < b; i++)
//     {
//     ascii[i] = (int)a[i];
//       ascii[i] = ascii[i] - 32;
//     }
//     printf("Upper case:");
//     for (int i = 0; i < b; i++)
//     {
//        printf("%c", ascii[i]);
//     }
// }

//  Write a program that accept a string from user and display the content in lower case
// #include<stdio.h>
// int main(){
//     char string[44];
//     int b = 0, asciiCode[44];
//     printf("Enter the string in upperCase: ");
//     scanf("%s", &string);
//     while (string[b] != '\0')
//     {
//       b++;
//     }
//     for (int i = 0; i < b; i++)
//     {
//        asciiCode[i] = (int)string[i];
//        if (asciiCode[i]>=65 && asciiCode[i]<92)
//        {
//           asciiCode[i] = asciiCode[i] + 32;
//        }
//     }
//     printf("lower case: ");
//     for (int i = 0; i < b; i++)
//     {
//        printf("%c", asciiCode[i]);
//     }
// }

// Write a program that accept a string from user and toggle the case of alphabet.
// #include<stdio.h>
// int main(){
//     char string[44];
//     int b = 0, asciiCode[44], n;
//     printf("Enter the string: \n");
//     scanf("%s", &string);
//     printf("Enter 1 to get string in lowercase whereas 2 to get in upper case: ");
//     scanf("%d", &n);
//     while (string[b] != '\0')
//     {
//       b++;
//     }
//     for (int i = 0; i < b; i++)
//     {
//        asciiCode[i] = (int)string[i];
//        if (n==1)
//        {
//        if (asciiCode[i]>=65 && asciiCode[i]<92)
//        {
//           asciiCode[i] = asciiCode[i] + 32;
//        }
//        }
//        else{
//             if (asciiCode[i]>92)
//        {
//           asciiCode[i] = asciiCode[i] - 32;
//        }
//        }
//     }
//     printf("sting on your requried case: ");
//     for (int i = 0; i < b; i++)
//     {
//        printf("%c", asciiCode[i]);
//     }
// }

// Write a program that determines the string is palindrome or not.
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     int checkpoint = 0, b;
//     char string[33];
//     printf("Enter the string: ");
//     scanf("%s", &string);
//     b = strlen(string);
//     for (int i = 0; i < (b / 2); i++)
//     {
//         if (string[i] != string[b - i - 1])
//         {
//             checkpoint = 1;
//             break;
//         }
//     }
//     if (checkpoint == 0)
//     {
//         printf("\nThe entered string is palindrome");
//     }
//     else
//     {
//         printf("\nNo palindrome.");
//     }
// }

// Write a program that accept the string and display it in reverse order using and without using strrev( ) function..
// #include<stdio.h>
// int main(){
//     int b= 0;
//     char string[23], reverseString[23];
//   printf("Enter string: ");
//   scanf("%s", string);
//  while (string[b] != '\0')
//  {
//     b++;
//  }
//   for (int i = 0, j=b-1; i < b, j>=0; i++, j--)
//   {
//      reverseString[i] = string[b-1-i];
//   }
//    printf("The reverse string is:");
//    for (int i = 0; i < b; i++)
//    {
//       printf("%c", reverseString[i]);
//    }
// }

// Write a program that accept a string and display its ascii value.
// #include <stdio.h>
// int main()
// {
//     char string[22];
//     int b = 0, asciiCode[22];
//     printf("Enter string: ");
//     scanf("%s", string);
//     while (string[b] != '\0')
//     {
//         b++;
//     }
//     printf("%d", b);
//     printf("The ascii code are: \n");
//     for (int i = 0; i < b; i++)
//     {
//         asciiCode[i] = (int)string[i];
//         printf("%d\t", asciiCode[i]);
//     }
// }

// Write a program that determines how many lower case, upper case and space are in a given string.
// #include<stdio.h>
// #include<string.h>
// // #include<stdlib.h>
// int main(){
//     int length, upperCase = 0, lowerCase = 0, space = 0;
//     char string[55];
//     printf("Enter the string");
//     scanf("%[^\n]", string);
//     length = strlen(string);
//     for (int i = 0; i < length; i++)
//     {
//       if ((int)string[i] >= 65 && (int)string[i]<92)
//       {
//         upperCase = upperCase + 1;
//       }
//        else if ((int)string[i] >= 97 && (int)string[i]<124)
//       {
//         lowerCase = lowerCase + 1;
//       }
//       else if(string[i] == ' '){
//           space++;
//       }
//     }
//     printf("UpperCase = %d\n LowerCase = %d\n space = %d", upperCase,lowerCase, space);
// }

// Write a program to input a string and count number of vowels present in the string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char string[33];
//     int vowels = 0;
//     printf("Enter string: ");
//     scanf("%[^\n]", string);
//     for (int i = 0; i < strlen(string); i++)
//     {
//         if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
//         {
//            vowels++;
//         }
//     }
//      printf("The number of vowels are %d", vowels);
// }

// Write a program to compare two strings and display larger one.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int lengthOfFirstString, lengthOfSecondString;
//     char firstString[33], secondString[44];
//     printf("ENTer first string: ");
//     gets(firstString);
//     printf("ENter second string: ");
//     gets(secondString);
//     lengthOfFirstString = strlen(firstString);
//     lengthOfSecondString = strlen(secondString);
//     if (lengthOfFirstString>lengthOfSecondString)
//     {
//        printf("First string is larger one");
//     }
//     else{
//         printf("Second string is larger one");
//     }
// }

// Write a program to concatenate two strings without using string handling built in function.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char firstString[44], secondString[55];
//     printf("ENter first string: ");
//     gets(firstString);
//     printf("ENter second string: ");
//     gets(secondString);
//     strcat(firstString, secondString);
//     printf("%s", firstString);
// }

// Write a program to read names of 10 students and sort them in alphabetical order.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char names[100][100], temp[33];
//     printf("Enter the name of 10 words: ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%s", names[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i; j < 10; j++)
//         {
//             if (strcmp(names[i], names[j]) > 0)
//             {
//                 strcpy(temp, names[i]);
//                strcpy(names[i], names[j]);
//                 strcpy(names[j], temp);
//             }
//         }
//     }
//     printf("The names in alphabetical order is:");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%s\n", names[i]);
//     }
// }