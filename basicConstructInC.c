// #include<stdio.h>
// int main(){
//     int a, b, multiply, addition, substraction;
//     float divison;
//     printf("Enter two numbers 'a' and 'b': ");
//     scanf("%d%d", &a, &b);
//     addition = a+b;
//     substraction = a-b;
//     multiply = a*b;
//     divison = (float)a/b;
//     printf("Addition is %d\nSubstraction is %d\nMultiplication is %d\nDivision is %.2f", addition, substraction, multiply, divison);
// }





//program to calculate surface area of cube


// #include<stdio.h>
// int main(){
//     int l, surfaceAreaOfCube;
//     printf("Enter the length of cube: ");
//     scanf("%d", &l);
//     surfaceAreaOfCube = 6*l*l;
//     printf("The surface are of cube is %d square units.", surfaceAreaOfCube);
// }



//program to calculate the area and circuference of circle.
// #include<stdio.h>
// int main(){
//     int r;
//     float areaOfCircle, circumfererneOfCircle;
//     printf("Enter the radius of circle: ");
//     scanf("%d", &r);
//      areaOfCircle = 3.14*r*r;
//      circumfererneOfCircle = 2*3.14*r;
//     printf("The area of circle is %2.2f\n square units and circumference is %.2f", areaOfCircle, circumfererneOfCircle);
// }



// to calculate the area and perimeter of rectangle 
//  #include<stdio.h>
//  int main(){
//      int length, breadth, areaOfRectangle, perimeteOfRectange;
//      printf("Enter length and breadth of rectangle: ");
//      scanf("%d%d", &length, &breadth);
//      areaOfRectangle = length * breadth;
//      perimeteOfRectange = 2*(length+breadth);
//      printf("The area and perimeter of rectangle are %d and %d", areaOfRectangle, perimeteOfRectange);
//  }

// to find reminder and quotient of two numbers
// #include<stdio.h>
// int main(){
//     int a, b, reminder;
//     float quotient;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     reminder = a%b;
//     quotient = (float)a/b;
//     printf("Reminder = %d\n Quotient = %.2f", reminder, quotient);
// }



// to convert seconds into minutes and hours
// #include<stdio.h>
// int main(){
//     int second;
//     float minute, hour;
//     printf("Enter the seconds: ");
//     scanf("%d", &second);
//     minute = (float)second/60;
//     hour = minute/60;
//     printf("Mintue = %.2f\n Hour = %.2f", minute, hour);
// }




// to convert days  into years and months
// #include<stdio.h>
// int main(){
//     int days;
//     float month, year;
//     printf("Enter the days: ");
//     scanf("%d", &days);
//     month = (float)days/30;
//     year = month/12;
//     printf("months = %.2f\n years = %.2f", month, year);
// }



// to convert mm into km , m and cm
// #include<stdio.h>
// int main(){
//     int mm;
//     float km, m, cm;
//     printf("Enter mm: ");
//     scanf("%d", &mm);
//     cm = (float)mm/10;
//     m = cm/100;
//     km = m/1000;
//     printf("cm = %.2f\n m = %.2f\n km = %.2f", cm, m, km);
// }


//to reverse 3 digit number;
// #include<stdio.h>
// int main(){
//     int number, reverseNumber;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     for ( ; number>0; number/=10)
//     {
//     reverseNumber = number%10;
//     printf("%d", reverseNumber);
//     }
// }


// to calculate percentage and marks obtained
#include<stdio.h>
int main(){
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks;
    float percentage;
    printf("Enter the marks obtained in 1st subject: \n");
    scanf("%d", &marks1);
    printf("Enter the marks obtained in 2nd subject: \n");
    scanf("%d", &marks2);
    printf("Enter the marks obtained in 3rd subject: \n");
    scanf("%d", &marks3);
    printf("Enter the marks obtained in 4th subject: \n");
    scanf("%d", &marks4);
    printf("Enter the marks obtained in 5th subject: \n");
    scanf("%d", &marks5);
    totalMarks = marks1+marks2+marks3+marks4+marks5;
    percentage = (float)totalMarks/500*100;
    printf("Total marks = %d\n Percentage = %.2f %%", totalMarks, percentage);
}


// to convert centigrade into fahrenheit
// #include<stdio.h>
// int main(){
//     float centigrade, fahrenheit;
//     printf("Enter centigrade: ");
//     scanf("%f", &centigrade);
//     fahrenheit = (9*centigrade/5) + 32;
//     printf("%f centigrade = %.2f", centigrade, fahrenheit);
// }

// to calculate root of quadratic eqn using the cofficient of the eqn
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a, b, c;
//     float firstRoot, secondRoot;
//     printf("Enter 2nd order coffecient: \n");
//     scanf("%d", &a);
//     printf("ENter 1st order coffecient: \n");
//     scanf("%d", &b);
//     printf("Enter constant: \n");
//     scanf("%d", &c);
//     firstRoot = (-b-(sqrt(b*b-(4*a*c))))/(2*a);
//     secondRoot = (-b+(sqrt(b*b-(4*a*c))))/(2*a);
//     printf("firstRoot = %.2f\n secondRoot = %.2f\n", firstRoot, secondRoot);
// }


//to calculate the area of traingle
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a, b, c;
//     float s, areaOfTraingle;
//     printf("Enter three sides of traingle: ");
//     scanf("%d%d%d", &a, &b, &c);
//     s = (float)(a+b+c)/2;
//     areaOfTraingle = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("area of traingle = %.2f", areaOfTraingle);
// }


//to interchange two number
// #include<stdio.h>
// int main(){
//     int a, b, temp;
//     printf("Enter two number: ");
//     scanf("%d%d", &a, &b);
//     printf("Before interchanging a= %d\n b = %d\n", a, b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After interchanging a = %d\n b = %d\n", a, b);
// }


// program to calculate the sum of digits
// #include<stdio.h>
// int main(){
//     int number, sum = 0;-
//     printf("Enter number: ");
//     scanf("%d", &number);
//     for ( ; number>0; number/=10)
//     {
//     sum = number%10 + sum;
//     }
//     printf("sum of digits = %d", sum);
// }




//program to convert decimal number into octal and hexadecimal
// #include<stdio.h>
// int main(){
//     int decimal, octal=0, hexadecimal=0, temp, place=1, rem, result;
//     printf("Enter the decimal: ");
//     scanf("%d", &decimal);
//     temp = decimal;
//     for( ; decimal>0; decimal/=8, place*=10)
//     {
//        octal = octal + decimal%8*place;
//     }
//     printf("The octal nmber is %d\n", octal);
//     printf("The hexadecimal number is : ");

//     for (; temp>0; temp/=16)
//     {
//       rem = temp%16;
//       if (rem>=10)
//       {
//         rem = rem+55;
//       }
//       else{
//           rem = rem + 48;
//       }
//       hexadecimal = hexadecimal*100 + rem;
//     }
//     for (; hexadecimal>0; hexadecimal/=100)
//     {
//         result = hexadecimal%100;
//        printf("%c", result);
//     }    
//     printf("\n");
// }



//program to print volume of radius
// #include<stdio.h>
// int main(){
//   int radius;
//   float volume;
//   printf("Enter radius: ");
//   scanf("%d", &radius);
//   volume = (float)4/3*radius*radius*radius;
//   printf("Volume of sphere is %.2f", volume);
// }


//program to print reminder after dividing by 5;
// #include<stdio.h>
// int main(){
//   int number, reminder;
//   printf("Enter number: ");
//   scanf("%d", &number);
//   reminder = number%5;
//   printf("The reminder after dividing by 5 is %d", reminder);
// }







