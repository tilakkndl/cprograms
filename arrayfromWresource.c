

// write a program in C to store elements in an array and print it.


// #include<stdio.h>
// int main(){
//     int elements[6];
//     printf("Enter the numbers: ");
//     for (int i = 0; i < 4; i++)
//     {
//       scanf("%d", &elements[i]);
//     }
//     printf("The elements in array are: ");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\t", elements[i]);
//     }
// }

//  Write a program in C to read n number of values in an array and display it in reverse order

// #include<stdio.h>
// int main(){
//     int elements[5];
//     printf("Enter ");
//     for (int i = 0; i < 4; i++)
//     {
//        scanf("%d", &elements[i]);
//     }

//     for (int i = 3; i >= 0; i--)
//     {
//         printf("%d\t", elements[i]);
//     } 
// }


//  Write a program in C to find the sum of all elements of the array.

// #include<stdio.h>
// int main(){
//     int elements[5], sum = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &elements[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//        sum = sum + elements[i];
//     }
//     printf("%d", sum);
    
// }


// Write a program in C to copy the elements of one array into another array.

// #include<stdio.h>
// int main(){
//     int a[5], b[5];
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         b[i] = a[i];
//         printf("%d", b[i]);
//     }
// }

// write the program to check the no of dublicate no 

#include<stdio.h>
int main(){
  int a[30], no = 0;
  printf("Enter ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i=0, checkingIndex = 0; i<5; i++, checkingIndex++)
  {
   if (a[i] == a[checkingIndex]&&((checkingIndex>i)||(checkingIndex<i)))
   {
    ++no;
   }
   
  }
  
  printf("%d", no/2);
}