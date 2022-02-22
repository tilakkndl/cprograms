// write a program which defines three variables int, flaat and char. Dislay the memory reserved by these variables
// #include<stdio.h>
// int main(){
//     int a;
//     float b;
//     char c;
//     int *p;
//     p = &a;
//     float *p2;
//     p2 = &b;
//     char *p3;
//     p3 = &c;
//     printf("the memory of a is %d\n", p);
//     printf("the address of b is %d\n", p2);
//     printf("The address of c is %d\n", p3);
// }

//write a program to find the sum of elements of array using pointer
// #include<stdio.h>
// int main(){
//     int sumOfArray = 0;
//     int a[] = {2, 2, 3, 5};
//     int *p;
//     p = a;
//     for (int i = 0; i < 4; i++)
//     {
//        sumOfArray = *(a+i) + sumOfArray;
//     }
//     printf("The sum of elements of array is %d", sumOfArray);
// }

//write a program to read the number of marks entered and print the top five program
// #include<stdio.h>
// int main(){
//     int n, a[33], temp;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//       scanf("%d", &a[i]);
//     }
//     int *p = a;
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < 5; j++)
//        {
//           if(*(a+i)>*(a+j)){
//              temp = *(a+i);
//              *(a+i) = *(a+j);
//              *(a+j) = temp;
//           }
//        }
//     }
//       printf("The top numbers are: ");
//        for (int i = 0; i < 5; i++)
//        {
//            printf("%d\t", *(a+i));
//        }
// }

//Write a program to print the size of pointer that holds the address of differnt types int, float and char
// #include<stdio.h>
// int main(){
//     int a = sizeof(int), b = sizeof(float), c = sizeof(char), *p1, *p2, *p3;
// p1 = &a;
// p2 = &b;
// p3 = &c;
// printf("The size of p1 is %d\n", *p1);
// printf("the size of p2 is %d\n", *p2);
// printf("the size of p3 is %d", *p3);
// }]

// write a program to exchange the value using pointer(call by address)
// #include<stdio.h>
//  int exchange(int *ptr1 , int *ptr2);
// int main(){
//     int a = 5, b = 6;
//     exchange(&a, &b);
//   printf("The value of a and b after exchanging is %d and %d\n", a, b);
// }
//  int exchange(int *ptr1 , int *ptr2){
//      int temp= *ptr1;
//      *ptr1 = *ptr2;
//      *ptr2 = temp;
// printf("The value of a and b is %d and %d\n", *ptr1, *ptr2);
//  }

// write a program to add two matrix m * n using pointer
// #include <stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[5][5], b[5][5], c[5][5];
//     int *p1, *p2, *p3;
//     int m1, n1, m2, n2;
//     p1 = &a[0][0];
//     p2 = &b[0][0];
//     p3 = &c[0][0];
//     printf("Enter the value of row and column: ");
//     scanf("%d%d", &m1, &n1);
//     printf("Enter the value of 1st matrix:");
//     for (int i = 0; i < m1; i++)
//     {
//         for (int j = 0; j < n1; j++)
//         {
//             scanf("%d",  (*(a+i)+j));
//         }
//     }
//     printf("Enter row and column for second matrix: ");
//     scanf("%d%d", &m2, &n2);
//         printf("Enter the second matrix: ");
//     for (int i = 0; i < m2; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             scanf("%d",  (*(b+i)+j));
//         }
//     }
//     for (int i = 0; i < m1; i++)
//     {
//         for (int j = 0; j < n1; j++)
//         {
//             *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
//         }
//     }
//    for (int i = 0; i < m2; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             printf("%d\t",  *(*(c+i)+j));
//         }
//         printf("\n");
//     }
//     getch();
// }




// Write a program that takes one dimensional array of n numbers and sorts the elements in ascending order. Use dynamic memory allocations.
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n, *p, temp;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     p = (int *)malloc(n*sizeof(int));
//     printf("Enter the elements of array:");
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d", p+i);
//            }
//     printf("The arrar is : ");
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d\t", *(p+i));
//     }
//     printf("\nThe number in ascending order :\n");
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 0; j < n; j++)
//       {
//       if (*(p+i)< *(p+j))
//       {
//          temp = *(p+i);
//          *(p+i) = *(p+j);
//          *(p+j) = temp;
//       }
      
//       }
      
//     }
//     for (int i = 0; i < n; i++)
//     {
//       printf("%d\t", *(p+i));
//     }
//     }




// Write a program to read number of employees, n, working in a company. Reserve the memory required to store age of employees using malloc() function. Read age of n employees from user and count the number of employees of age above 80 years.
// #include<stdlib.h>
// #include<stdio.h>
// int main(){
//     int *p, n, count=0;
//     printf("Enter the number of employee: ");
//     scanf("%d", &n);
//     p = (int *)malloc(n*sizeof(int));
//     printf("Enter the age of employee: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", p+i);
//     }
// for (int i = 0; i < n; i++)
// {
//     if (*(p+i)> 80){
//         count++;
//     }
         
// }
// printf("The number of person having age more than 80 is %d", count);
// }





// Write a program to read matrix of size mxn entered by user, and display its transpose matrix.
#include<stdio.h>
int main(){
    int a[5][5], m, n, *p;
    p=&a[0][0];
    printf("Enter the row and column: ");
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
       scanf("%d", (*(a+i)+j));
        }
    }
    printf("The inverse is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",  *(*(a+j)+i));
        }
        printf("\n");
    }
    
}