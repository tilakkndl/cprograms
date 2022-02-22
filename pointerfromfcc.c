// #include<stdio.h>
// void increment(int a){
//     a = a+1;
// }
// int main(){
//       int a;
//       a = 10;
//       increment(a);
//       printf("%d", a);
// }


// #include<stdio.h>
// void increment(int *p){
//     *p = *p+1;
// }
// int main(){
//       int a;
//       a = 10;
//       increment(&a);
//       printf("%d", a);
// }


//array as function argument

// #include<stdio.h>
// int sumOfElements(int* A, int size){
//     //  int size = sizeof(A)/sizeof(A[0]);
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//         sum += A[i];
//     }
//     return sum;
// }
// int main(){
//     int A[] = {1, 2, 3, 4, 5};
//     int size = sizeof(A)/sizeof(A[0]);
//     int total = sumOfElements(A, size);
//     printf("Sum of elements = %d ", total);
// }


// #include<stdio.h>
// void Double(int *A, int size){
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//        A[i]=2*A[i];
//     }

    
// }

// int main(){
//     int A[] = {1, 2, 3, 4, 5};
//     int size = sizeof(A)/sizeof(A[0]);
//     int i;
//     Double(A, size);
//     for (i = 0; i < size; i++)
//     {
//       printf("%d\t", A[i]);
//     }
    
// }


// #include<stdio.h>
// int sumOfElement(int A[]){
//     int i, sum = 0;
//     int size = sizeof(A)/sizeof(A[0]);
//     for (i = 0; i <size; i++)
//     {
//       sum+=A[i];
//     }
    
// }
// int main(){
//     int A[] = {1,2,3,4,5};
//     int total = sumOfElement(A);
//     printf("Sum of element = %d", total);
//     printf("size of A =%d, Size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
// }



// #include<stdio.h>
// void print(char* C){
//     int i = 0;
//     // while (C[i] != '\0')
//     while(*(C+i)!= '\0')
//     {
//         printf("%c", C[i]);
//         i++;
//     }
//     printf("\n");
    
// }
// int main(){
// char C[20] = "Hellow";
// print(C);
// }




// #include<stdio.h>
// void print(char* C){
    
//     // while (C[i] != '\0')
//     while(*C!= '\0')
//     {
//         printf("%c", *C);
//         C++;
//     }
//     printf("\n");
    
// }
// int main(){
// // char C[20] = "Hellow";
// char *C = "Hellow";
// // C[0] = 'A';
// print(C);

// }


// #include<stdio.h>
// int main(){
//     int B[2][3]={2, 3, 4, 5, 7, 8};
//     printf("%d\t", B);
//     printf("%d\t", *B);
//     printf("%d\t", B[0]);
//     printf("%d", &B); 
// }



// #include<stdio.h>
// int main(){
//     int C[3][2][2] = {{{2, 5}, {7, 9}},
//     {{3, 4}, {6, 1}},
//     {{0, 8}, {11, 13}}

//     };
//     printf("%d\t%d\t%d\t%d\t",C, *C, C[0], &C[0][0]);
//     printf("%d",*(C[0][1]+2));
// }






// #include<stdio.h>
// int main(){
//     int C[3][2][2] = {{{2, 5}, {7, 9}},
//     {{3, 4}, {6, 1}},
//     {{0, 8}, {11, 13}}

//     };
//     printf("%d\t%d\t%d\t%d\t",C, *C, C[0], &C[0][0]);
//     printf("%d",*(C[0][1]+2));
// }







// #include<stdio.h>
// int main(){
//     int C[3][2][2] = {{{2, 5}, {7, 9}},
//     {{3, 4}, {6, 1}},
//     {{0, 8}, {11, 13}}

//     };
//     printf("%d\t%d\t%d\t%d\t",C, *C, C[0], &C[0][0]);
//     printf("%d",*(C[0][1]+2));
// }



// //passing 3D array in function
// #include<stdio.h>
// void func(int (*A)[3]){
//     printf("Hellow guys");
// }
// int main(){
//     int C[3][2][2] = {{{2, 5}, {7, 9}},
//     {{3, 4}, {6, 1}},
//     {{0, 8}, {11, 13}}

//     };
//    func(C);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int *A = (int*)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//       A[i] = i+1;
//     }
//     free(A);
//     for (int i = 0; i < n; i++)
//     {
//       printf("%d\t", A[i]);
//     }
    
    
// }



// realloc


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int *A = (int*)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//       A[i] = i+1;
//     }
//     int *B = *(int*)realloc(A, 2*n*sizeof(int));
//     printf("Previous block address = %d, new address = %d\n", A, B);
//     for (int i = 0; i < 2*n; i++)
//     {
//       printf("%d\t", B[i]);
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// int* Add(int* a, int* b){
//   int *c = malloc(sizeof(int));
//   *c = *a + *b;
//   return c;
// }
// int main(){
//   int x = 2, y = 4;
//   int* z = Add(&x, &y);
//   printf("Sum = %d\n", *z);
// }

// while we are here to pass return value of function by the pointer we have to allocate the memory dynamically to prevent from the garbage value.



// #include<stdio.h>
// int Add(int a, int b){
//     return a+b;
// }



//function as the pointer 



// int main(){
//     int c;
//     int (*p)(int, int);
//     p = &Add;
//     // p = Add;
//     c = (*p)(2,3);
//     //  c = p(2,3);
//     printf("%d", c);
// }



// #include<stdio.h>
// void PrintHello(){
//     printf("Hellow\t");
// }
// int main(){
//     void (*ptr)();
//     ptr = PrintHello;
//     ptr();
// }

// #include<stdio.h>
// void PrintHello(char *name){
//     printf("Hello %s", name);
// }
// int Add(int a, int b){
//     return a+b;
// }
// int main(){
//     void (*ptr)(char *);
//     ptr = PrintHello;
//     ptr("Tom");
// }




#include<stdio.h>
void A(){
    printf("Hellow");
         }
         void B(void (*ptr)){
             ptr();
         }
int main(){
  B(A);
}















