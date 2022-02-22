// #include
// #include<stdio.h>
// #include"nullPointer.c"
// int main(){
//     int a = 1;
//     printf("the position of Ram is %d st");
// }

// #define

// #include<stdio.h>
// #define PI 3.14
// #define SQUARE(r) r*r
// int main(){
//     int r = 4;
//     float var = PI;
//     printf("the value of PI is %f\n", var);
//     printf("The are of circle is %f", PI * SQUARE(r));
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
     printf("File name is %s\n", __FILE__);
     printf("Today's date  is %s\n", __DATE__);
     printf("Today's time  is %s\n", __TIME__);
     printf("Line no.  is %d\n", __LINE__);
     printf("ANSI:  %d\n", __STDC__);
}