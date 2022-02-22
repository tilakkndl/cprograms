// #include<stdio.h>
// int sum(int, int);
// int main(){
//     int a, b, summ;
//     printf("Enter the value of a and b are: ");
//     scanf("%d %d", &a, &b);
//     summ = sum(a, b);
//     printf("The sum is%d", summ);
// }

// int sum(int x, int y){
//     int s;
//     s = x+y;
//     return s;
// }

// #include<stdio.h>
// int diff(int, int);
// int add(int, int);
// int mul(int, int);
// int div(int, int);
// int main(){
//     int a, b;
//     printf("Enter the two numbers: ");
//     scanf("%d%d", &a, &b);
//     diff(a,b);
//     printf("The difference is %d\n", diff(a, b));
//     div(a,b);
//     printf("The division is %d\n", div(a, b));
//     add(a,b);
//     printf("The addision is %d\n", add(a, b));
//     mul(a,b);
//     printf("The multiplication is %d\n", mul(a, b));
// }

// int diff(int d, int e){
//     return d - e;
// }
// int add(int d, int e){
//     return d + e;
// }
// int mul(int d, int e){
//     return d * e;
// }
// int div(int d, int e){
//     return (float)d / e;
// }

// #include<stdio.h>
// int greatestNo(int, int);
// int main(){
//     int a, b;
//     printf("Enter the numbers: ");
//     scanf("%d%d", &a, &b);
//     greatestNo(a, b);
//     printf("The greatest number is %d", greatestNo(a,b));
// }
// int greatestNo(int d, int f){
//     if(d>f){
//         return d;
//     }
//     else{
//         return f;
//     }
// }



// #include<stdio.h>
// int greatest();
// int main(){
//     int a, b, c;
//     printf("Enter the numbers: ");
//     scanf("%d%d%d", &a, &b, &c);
//     greatest(a, b, c);
//     printf("The grestest number among the given three numbers is %d", greatest(a, b, c));
// }
// int greatest(int a, int b, int c){
//     if(a<b && c<b){
//      return b;
//     }
//     else if(a<c && b<c){
//         return c;
//     }
//     else{
//         return a;
//     }
// }

#include<stdio.h>
void array(int arr[]);
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    array(a);
}
void array(int arr[]);
{
    int sum = 0;
    printf("The sum of numbers in array is ");
    for (int i = 0; i < 4; i++)
    {
       sum = sum + arr[i];
    }
    printf("%d", &sum);
    
}
