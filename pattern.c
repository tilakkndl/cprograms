
// 1
// 2 3
// 4 5 6
// 7 8 9 10







// #include<stdio.h>
// int main(){
//     int n;
//     int a = 1;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
           
//            printf("%d ", a);
//         a++;
//         }
       

//         printf("\n");
//     }
    
// }






//       1
//      2 3
//     4 5 6
//    7 8 9 10   


// #include<stdio.h>
// int main(){
//     int a = 1;
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=n-i ; j++)
//         {
//            printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//            printf("%d ", a);
//           ++a;
//         }
//        printf("\n");
        
//     }
    
// }



//  Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n term

// #include<stdio.h>
// int main(){
//     int n;
//     float sum = 0, t=1, d, x;
//     printf("Enter n and x");
//     scanf("%d%f", &n, &x);
//     for (int i = 1; i < n; i++)
//     {
  
//     t = t*(((-x)*x)/(2*i*(2*i-1)));
//     sum = sum +t;
//     }
//     sum = sum+1;
//     printf("The sum is %f ", sum);
    
// }


// #include<stdio.h>
// int main(){
//     int n;
//     int a= 2;
//     float sum;
//     printf("Enter the number of n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
       
//         sum = sum + 1/(float)i;
//     }
//     printf("%f", sum);
    
//     printf("%d", a);

    
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the numbers of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//        for (int j = 1; j <= n-i; j++)
//        {
//            printf(" ");
//        }
//        for (int j = 1; j <= 2*i-1; j++)
//        {
//           printf("*");
//        }
       
//        printf("\n");
//     }
    

// }



// #include<stdio.h>
// int main(){
//     int n, sum = 0, term = 9;
//     printf("Enter the number n: ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//        term = term * 10+ 9;
//        sum = sum+term;
//     }
//     sum = sum+9;
//     printf("%d", sum);
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//        for (int j = 1; j <= i; j++)
//        {
//           if (j%2==0)
//           {
//              printf("0");
//           }
//           else{
//               printf("1");
//           }
          
//        }
//        printf("\n");
       
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int n, x;
    
//     printf("Enter n and x: ");
//     scanf("%d%d", &n, &x);
//     float term = x, sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//        term = (-term) * x*x;
//        sum = sum+term;
//     }
//     sum = sum + x;
//     printf("The sum is %f", sum);
    
// }



// #include<stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i*i;
//     }
//     printf("%d", sum);
    
// }


// #include<stdio.h>
// int main(){
//     int n, sum = 0, term = 1;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++)
//     {
//         term = term * 10 +1;
//         sum = sum + term;
//     }
//     sum = sum + 1;
//     printf("%d", sum);
    

// }

// #include<stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n/2; i++)
//     {
//        if (n%i== 0)
//        {
//          sum = sum + i;
//        }
       
//     }
//     if (n == sum)
//     {
//       printf("The number is perfect");
//     }
//     else{
//         printf("The number is noooot.");
//     }
    
    
// }


// #include<stdio.h>
// int main(){
//     int intial, final, sum = 0, i;
//     printf("Enter the intial, final: ");
//     scanf("%d%d", &intial, &final);
//     for (i = intial; i <= final; i++)
//     {
//         sum = 0;
//         for (int j = 1; j <= i/2; j++)
//         {
//            if (i%j == 0)
//            {
//               sum = sum + j;
//            }
//         }
        
    
//     if (sum == i)
//         {
//            printf("%d\t", i);
//         }  
        
// }
// }

// #include<stdio.h>
// int main(){
//     int n, digits, sumOfDigits=0, storeValue;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     storeValue = n;
//    while (n>0)
//    {
//        digits = n%10;
//        n = n/10;
//        sumOfDigits = digits*digits*digits + sumOfDigits;
//    }
//    if (sumOfDigits == storeValue)
//    {
//       printf("The sum is Armstrong");
//    }
//    else{
//        printf("The sum is not Armstrong");
//    }  
// }



// I got confused in the while loop why i can't use i instead of n


// #include<stdio.h>
// int main(){
//     int digits, sum = 0, min, max, n;
//     printf("Enter the range min and max: ");
//     scanf("%d%d", &min, &max);
//     printf("The armstrong within the range are: ");
//     for (int i = min; i <= max; i++)
//     {
//         sum = 0;
//         n = i;
        
//       while (n>0)
//       {
//          digits = n%10;
//          n = n / 10;
//          sum = sum + digits*digits*digits;
//       }
//       if (sum == i&& i>1)
//       {
//          printf("%d\t", i);
//       }   
//     }
// }


// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter the rows: ");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//      for (int j = 1; j <= n-i+1; j++)
//      {
//        printf(" ");
//      }
//      for (int j = 1; j <= 2*i-1; j++)
//      {
//        printf("*");
//      }
//      printf("\n"); 
//      }
  
//    for (int i = 1; i <= n*2+1; i++)
//    {
//       printf("*");
//    }
//    printf("\n");
//    for (int i = 1; i <= n; i++)
//    {
//      for (int j = 1; j <= i; j++)
//      {
//       printf(" ");
//      }
//      for (int j = 1; j <= (n-i)*2+1; j++)
//      {
//        printf("*");
//      }
//      printf("\n");

//    } 
// }



// 33. Write a C program to display Pascal's triangle. Go to the editor
//  Test Data :
// Input number of rows: 5
// Expected Output :

//         1
//       1   1 
//     1   2   1 
//   1   3   3   1
// 1   4   6   4   1 

// #include<stdio.h>
// int main(){
//   int n, value, i, j, k;
//   printf("Enter the rows: ");
//   scanf("%d", &n);
//   for (i = 0; i < n; i++)
//   {
//   for (j = 0; j < n-i; j++)
//   {
//    printf(" ");
//   }
//  value = 1;
//   for (k = 0; k <= i; k++)
//   {
//     printf("%d ", value);
//     value = value*(i-k)/(k+1);
//   }
   
//    printf("\n");
//    }
  
// }




// #include<stdio.h>
// int main(){
//   int min, max, checkpoint;
//   printf("Enter the number: ");
//   scanf("%d%d", &min, &max);
//   printf("The prime numbers are: ");
//   for (int i = min; i <= max; i++)
//   {
//     checkpoint = 0;
//   for (int j = 2; j <= i/2; j++)
//   {
//     if (i%j==0)
//     {
//       checkpoint = 1;
//        break;
//     }
    
    
//   }
//   if (checkpoint != 1)
//   {
//     printf("%d\n", i);
//   }
  
   
//   }
  
// }


// #include<stdio.h>
// int main(){
//   int a=0, b=1, n, c;
//   printf("n= ");
//   scanf("%d", &n);
//   printf("%d\t%d\t", a, b);
//   for (int i = 1; i < n-1; i++)
//   {
//     c = b;
//     b = a + b;
//     a = c;
//     printf("%d\t", b);

//   }
  
// }





//   1
//  121
// 12321
// #include<stdio.h>
// int main(){
//   int n, a;
//   printf("Enter the rows: ");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//   {
//    for (int j = 1; j <= n-i; j++)
//    {
//      printf(" ");
//    }
//   for (int j = 1; j <= i; j++)
//   {
//    printf("%d", j);
//   }
//   for (int j = i-1; j >= 1 ; j--)
//   {
//     printf("%d", j);
//   }
  
//   printf("\n");
    
//    }
//   }
  


// to check the palindrone

// #include<stdio.h>
// int main(){
//   int n, original, sum = 0;
//   printf("n= ");
//   scanf("%d", &n);
//   original = n;
//     for (; n>0 ; )
//   {
//    sum = sum*10+n%10;
//    n=n/10;

//   }
//   if (sum == original)
//   {
//     printf("Palindrone");
//   }
//   else{
//     printf("Not");
//   }
// }



// program to reverse a number
// #include<stdio.h>
// int main(){
//   int n, sum=0, original;
//   printf("n= ");
//   scanf("%d", &n);
//   for (;n > 0; )
//   {
//     sum = sum*10+n%10;
//     n/=10;
  
// }
// printf("%d", sum);
// }




// . Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.


// #include<stdio.h>
// int main(){
//   int sum = 0;
//   for (int i = 100; i < 201; i++)
//   {
//    if (i%9==0)
//    {
//      sum = sum + i;
//    }
   
//   }
//   printf("%d", sum);
// }




  //       A
  //     A B A 
  //   A B C B A
  // A B C D C B A 

  // #include<stdio.h>
  // int main(){
  //   int n;
  //   printf("n = ");
  //   scanf("%d", &n);
  //   for (int i = 1; i <= n; i++)
  //   {
  //     for (int j = 1; j < n-i; j++)
  //     {
  //       printf(" ");
  //     }
  //     for (int j = 1; j <= i ; j++)
  //     {
  //       printf("%c", 64+j);
  //     }
  //     for (int j = i-1; j > 0; j--)
  //     {
  //       printf("%c", 64+j);
  //     }
  //     printf("\n");
  //   }
  // }


  // . Write a program in C to convert a decimal number into binary without using an array.


  // #include<stdio.h>
  // int main(){
  //   int n, binaryNo = 0, place = 1;
  //   printf("n = ");
  //   scanf("%d", &n);
  //   for (; n>0 ; )
  //   {
  //     binaryNo = binaryNo + n%2*place;
  //     n/=2;
  //     place = place * 10;
  //   }
  //   printf("%d", binaryNo);
  // }



  // Write a program in C to convert a binary number into a decimal number without using array, function and while loop


// #include<stdio.h>
// int main(){
//     int n, decimal = 0, i = 1, p = 1;
//     printf("n = ");
//     scanf("%d", &n);
//     for (; n>0; )
//     {
     
//       if(i == 1){
//          p = p*1;
//      }
//      else{
//          p = p*2;
//      }

//      decimal = decimal+ ((n%10)*p);
//      i++;
//       n/=10;
//     }
//     printf("%d", decimal);
    
// }


// #include<stdio.h>
// int main(){
//     int n1, n2, j, hcf;
//     printf("numbers: ");
//     scanf("%d%d", &n1, &n2);
//     j = (n1<n2)?n1:n2;
//     for (int i = 1; i <= j; i++)
//     {
//        if (n1%i==0&&n2%i==0)
//        {
//          hcf = i;
//        }
       
//     }
//     printf("%d", hcf);
//     }




//  Write a program in C to find LCM of any two numbers



// #include<stdio.h>
// int main(){
//     int n1, n2, hcf, lcm, j;
//     printf("Numbers: ");
//     scanf("%d%d", &n1, &n2);
//     j = (n1<n2)?n1:n2;
//     for (int i = 1; i <= j; i++)
//     {
//        if ((n1%i==0)&&(n2%i==0))
//        {
//          hcf = i;
//        }
       
//     }
//     lcm = n1/hcf*n2;
//     printf("hcf is %d\nLcm is %d", hcf, lcm);
    
// }




// Write a C program to check whether a number is a Strong Number or not.

// #include<stdio.h>
// int main(){
//     int n, digit, checkDigits= 0, factorialOfDigits, original;
//     printf("Enter the nummmmber; ");
//     scanf("%d", &n);
//     original = n;
//     for (; n > 0; )
//     {
//        digit = n%10; 
//         factorialOfDigits = 1;
//        for (int j = digit; j > 1; j--)
     
//        {
//           factorialOfDigits = factorialOfDigits*j;
//        }
//        checkDigits = checkDigits + factorialOfDigits;
//        n=n/10;
//     }
//     if (checkDigits == original)
//     {
//         printf("Strong Number");
//     }
//     else{
//         printf("Not Strong nunnnnber;");
//     }
    
// }



// Write a C program to find Strong Numbers within a range of numbers


// #include<stdio.h>
// int main(){
//   int min, max, checkdigits=0, digit, factorialOfDigit, original;
//   printf("Numbers: ");
//   scanf("%d%d", &min, &max);
//   for (int i = min; i <= max; i++)
//   {
//     original = i;
//     checkdigits = 0;
//   for (int k = i; k > 0 ; k/=10)
//   {
    
//     factorialOfDigit = 1;
//     for (int j = k%10; j > 1; j--)
//     {
//      factorialOfDigit = factorialOfDigit*j;
//     }
//     checkdigits = checkdigits + factorialOfDigit;
//   }
//   if (original == checkdigits)
//   {
//    printf("%d\t", original);
//   }
//   }
// }




//  Write a c program to find out the sum of an A.P. series



// #include<stdio.h>
// int main(){
//   int a, n, d, sum = 0;
  
//   printf("First term, no of term and comman difference are: ");
//   scanf("%d%d%d", &a, &n, &d);
//   int c = a;
//   for (int i = 1; i < n; i++)
//   {
//     a = a + d;
//     sum = sum + a;
//   }
//   printf("%d", sum+c);
// }



//  Write a program in C to convert a decimal number into octal without using an array

// #include<stdio.h>
// int main(){
//   int n, sumForBinary=0, place = 1;
//   printf("N = ");
//   scanf("%d", &n);

//   //to convert decimal into binary number.
//   for (; n > 0; n/=8)
//   {
//     sumForBinary = sumForBinary + n%8*place;
//     place = place*10;
//   }
//   printf("%d", sumForBinary);
// }




// Write a program in C to convert an octal number to a decimal without using an array


// #include<stdio.h>
// int main(){
//   int n, power = 1, decimalNumber, p = 1;
//   printf("N= ");
//   scanf("%d", &n);
//   for (; n > 0; )
//   {
//     if (p == 1)
//     {
//       power = power*1;
//     }
//     else{
//       power = power * 8;
//     }
//     decimalNumber = decimalNumber + ((n%10) * power);
//     n/=10;
//     p++;
//   }
//   printf("%d", decimalNumber);
  
// }



// #include<stdio.h>
// int main(){
//     int n, decimal = 0, i = 1, p = 1;
//     printf("n = ");
//     scanf("%d", &n);
//     for (; n>0; )
//     {
     
//       if(i == 1){
//          p = p*1;
//      }
//      else{
//          p = p*8;
//      }

//      decimal = decimal+ ((n%10)*p);
//      i++;
//       n/=10;
//     }
//     printf("%d", decimal);
    
// }



// Write a program in c to find the Sum of GP series



// #include<stdio.h>
// int main(){
//   int a, n, r, sum = 0;
//   printf("Enter: ");
//   scanf("%d%d%d", &a, &n, &r);
//   int c = a;
//   for (int i = 1; i < n; i++)
//   {
//     a = a *r;
//     sum = a + sum;
//   }
//   sum = sum + c;
//   printf("%d", sum);

// }



// Write a program in C to convert a binary number to octal

// #include<stdio.h>
// int main(){
//   int binaryNo, i = 1, power = 1, sum = 0, octal = 0, place = 1;
//   printf("Enter ");
//   scanf("%d", &binaryNo);

//   //for binary to decimal
//   for (; binaryNo > 0; binaryNo/=10)
//   {
//   if (i ==1)
//   {
//     power = power*1;
//   }
//   else{
//     power = power*2;
//   }
//   sum = sum +((binaryNo%10)*power);
//   i++;

//   }
//   printf("%d\n", sum);


//   //for decimal to octal
//   for (;sum>0 ;sum/=8)
//   {
//     octal = octal + sum%8*place;
//     place= place*10;
//   }
//   printf("%d", octal);
// }



// Write a program in C to convert an octal number into binary

// #include<stdio.h>
// int main(){
//   int octal, binary = 0, place = 1;
//   printf("Enter ");
//   scanf("%d", &octal);
  
//   for (; octal>0; octal/=8)
//   {
//     binary = binary + octal%8*place;
//     place=place*10;
//   }
//   printf("%d", binary);
  
// }


// Write a program in C to convert a decimal number to hexadecimal


// #include<stdio.h>
// int main(){
//   int decimal, hexadecimal, digits, sum = 0;
//   printf("decimal no: ");
//   scanf("%d", &decimal);
//   for (; decimal>0; decimal/=16)
//   {
//    digits = decimal%16;
//    if (digits>=10)
//    {
//     digits = 55+digits;
   
//    }
//    else{
//       digits = 48+digits;
//    }
   
   
//     sum = digits + sum*100;
//   }
//   printf("The hexadecimal is: ");
//   for (; sum>0; sum/=100)
//    {
//      hexadecimal = sum%100;
//      printf("%c", hexadecimal);
//    }
//    printf("\n");
// }


// Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers

// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the number: ");
//   scanf("%d", &n);
//   for (int i = 3; i < n; i++)
//   {
//    for (int j = 2; j <= i; j++)
//    {
//     if (i%j != 0)
//     {
//       for (int k = 1; k < n; k++)
//       {
//        for (int l = 3; l <= k; l++)
//        {
//         if (k%l != 0)
//         {
//           if (i+k == n)
//           {
//            printf("%d\t%d\n", i, k);
//           }
          
//         }
        
//        }
       
//       }
      
       
      
//     }
    
//    }
   
//   }
  
// }







#include<stdio.h>
int main(){
  for (int i = 0; i < 5; i++)
  {
    for (int k = 0; k <= i; k++)
    {
    for (int j = 0; j <= i; j++)
    {
    printf("i");
      
    }
    printf("\t");
     }
    printf("\n");
  }
}